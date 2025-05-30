#include "CalcEvalVisitor.hpp"
#include <stdexcept>
#include <cmath>
#include <sstream>

using namespace std;

any CalcEvalVisitor::visitChildren(antlr4::tree::ParseTree* ctx) {
    any result;
    for (auto child : ctx->children) {
        result = visit(child);
    }
    return result;
}

// Functions memory managing - enter when call, exit when return
void CalcEvalVisitor::enterScope() {
    scopes.push_back(unordered_map<string, Variable>());
}
void CalcEvalVisitor::exitScope() {
    if (!scopes.empty()) {
        scopes.pop_back();
    }
}

// Need this so its possible to check conditions in ifs and whiles
bool CalcEvalVisitor::isTrue(const any& value) {
    // I dont really know how those "casts" everywhere work, but as long as they work, I'm okay with it
    // Atleast I think this is better then store everywhere types as strings like "integer" as I did in previous labs in my parsers
    if (value.type() == typeid(bool)) {
        return any_cast<bool>(value);
    }
    if (value.type() == typeid(int)) {
        return any_cast<int>(value) != 0;
    }
    if (value.type() == typeid(double)) {
        return fabs(any_cast<double>(value)) > 1e-9;
    }
    return false;
}

// Equality check
bool CalcEvalVisitor::isEqual(const any& lVal, const any& rVal) {
    if (lVal.type() != rVal.type()) return false;

    if (lVal.type() == typeid(int)) {
        return any_cast<int>(lVal) == any_cast<int>(rVal);
    }
    if (lVal.type() == typeid(double)) {
        return fabs(any_cast<double>(lVal) - any_cast<double>(rVal)) < 1e-9;
    }
    if (lVal.type() == typeid(bool)) {
        return any_cast<bool>(lVal) == any_cast<bool>(rVal);
    }
    return false;
}

// TODO: add posibility of types changing (need a lot of fixes, I think I wont do this after all)
void CalcEvalVisitor::checkType(const string& expectedType, const any& value) {
    string actualType = getType(value);
    if (expectedType != actualType) {
        throw runtime_error("Type mismatch. Expected " + expectedType + ", got " + actualType);
    }
}
string CalcEvalVisitor::getType(const any& value) {
    if (value.type() == typeid(int)) return "integer";
    if (value.type() == typeid(double)) return "float";
    if (value.type() == typeid(bool)) return "bool";
    return "unknown";
}

// Main thing
antlrcpp::Any CalcEvalVisitor::visitProgram(CalcParser::ProgramContext* ctx) {
    enterScope();
    auto result = visitChildren(ctx);
    exitScope();
    return result;
}

antlrcpp::Any CalcEvalVisitor::visitVarAssignmentStat(CalcParser::VarAssignmentStatContext* ctx) {
    return visit(ctx->var_assignment());
}
antlrcpp::Any CalcEvalVisitor::visitTypedVarAssignmentStat(CalcParser::TypedVarAssignmentStatContext* ctx) {
    return visit(ctx->typed_var_assignment());
}

// Working with += and similiar operators
antlrcpp::Any CalcEvalVisitor::visitVarCompoundAssignmentStat(CalcParser::VarCompoundAssignmentStatContext* ctx) {
    auto assignment = ctx->var_comp_assignment();
    string varName = assignment->NAME()->getText();
    string op = assignment->children[1]->getText();
    any rightValue = visit(assignment->expr());

    // Check if exists
    Variable* var = nullptr;
    for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
        if (it->count(varName)) {
            var = &(*it)[varName];
            break;
        }
    }
    if (!var) {
        throw runtime_error("Variable '" + varName + "' not defined");
    }

    // Do the thing
    any newValue;
    if (op == "+=") {
        if (var->type == "integer" && rightValue.type() == typeid(int)) {
            newValue = any_cast<int>(var->value) + any_cast<int>(rightValue);
        }
        else if (var->type == "float") {
            double lVal = var->value.type() == typeid(int) ? any_cast<int>(var->value) : any_cast<double>(var->value);
            double rVal = rightValue.type() == typeid(int) ? any_cast<int>(rightValue) : any_cast<double>(rightValue);
            newValue = lVal + rVal;
        }
        else {
            throw runtime_error("Invalid types for += operation");
        }
    }
    else if (op == "-=") {
        // ctrl c ctrl v
        if (var->type == "integer" && rightValue.type() == typeid(int)) {
            newValue = any_cast<int>(var->value) - any_cast<int>(rightValue);
        }
        else if (var->type == "float") {
            double lVal = var->value.type() == typeid(int) ? any_cast<int>(var->value) : any_cast<double>(var->value);
            double rVal = rightValue.type() == typeid(int) ? any_cast<int>(rightValue) : any_cast<double>(rightValue);
            newValue = lVal - rVal;
        }
        else {
            throw runtime_error("Invalid types for -= operation");
        }
    }
    else if (op == "*=") {
        if (var->type == "integer" && rightValue.type() == typeid(int)) {
            newValue = any_cast<int>(var->value) * any_cast<int>(rightValue);
        }
        else if (var->type == "float") {
            double lVal = var->value.type() == typeid(int) ? any_cast<int>(var->value) : any_cast<double>(var->value);
            double rVal = rightValue.type() == typeid(int) ? any_cast<int>(rightValue) : any_cast<double>(rightValue);
            newValue = lVal * rVal;
        }
        else {
            throw runtime_error("Invalid types for *= operation");
        }
    }
    else if (op == "/=") {
        if (var->type == "integer" && rightValue.type() == typeid(int)) {
            int divisor = any_cast<int>(rightValue);
            if (divisor == 0) throw runtime_error("Division by zero");
            newValue = any_cast<int>(var->value) / divisor;
        }
        else if (var->type == "float") {
            double rVal = rightValue.type() == typeid(int) ? any_cast<int>(rightValue) : any_cast<double>(rightValue);
            // Zero check for floats
            if (fabs(rVal) < 1e-9) throw runtime_error("Division by zero");
            double lVal = var->value.type() == typeid(int) ? any_cast<int>(var->value) : any_cast<double>(var->value);
            newValue = lVal / rVal;
        }
        else {
            throw runtime_error("Invalid types for /= operation");
        }
    }
    else if (op == "%=") {
        if (var->type == "integer" && rightValue.type() == typeid(int)) {
            int divisor = any_cast<int>(rightValue);
            if (divisor == 0) throw runtime_error("Division by zero in %");
            newValue = any_cast<int>(var->value) % divisor;
        }
        else {
            throw runtime_error("% only valid for integers");
        }
    }

    var->value = newValue;
    return newValue;
}

antlrcpp::Any CalcEvalVisitor::visitExpressionStat(CalcParser::ExpressionStatContext* ctx) {
    return visit(ctx->expr());
}
antlrcpp::Any CalcEvalVisitor::visitPrintExprStat(CalcParser::PrintExprStatContext* ctx) {
    return visit(ctx->print_expression());
}
antlrcpp::Any CalcEvalVisitor::visitReturnExprStat(CalcParser::ReturnExprStatContext* ctx) {
    return visit(ctx->return_expression());
}
antlrcpp::Any CalcEvalVisitor::visitFunctionDefenitinStat(CalcParser::FunctionDefenitinStatContext* ctx) {
    return visit(ctx->funct_def());
}
antlrcpp::Any CalcEvalVisitor::visitOperatorIfStat(CalcParser::OperatorIfStatContext* ctx) {
    return visit(ctx->operator_if());
}
antlrcpp::Any CalcEvalVisitor::visitOperatorWhileStat(CalcParser::OperatorWhileStatContext* ctx) {
    return visit(ctx->operator_while());
}

// Var assignmasfasfasf
antlrcpp::Any CalcEvalVisitor::visitVarAssignmentExpression(CalcParser::VarAssignmentExpressionContext* ctx) {
    string varName = ctx->NAME()->getText();
    any value = visit(ctx->expr());

    // Check if variable exists in current scope
    if (scopes.back().count(varName)) {
        // Existing variable - check type
        string existingType = scopes.back()[varName].type;
        string newType = getType(value);
        if (existingType != newType) {
            throw runtime_error("Cannot change type of variable '" + varName + "' from " + existingType + " to " + newType);
        }
        scopes.back()[varName].value = value;
    }
    else {
        // When its new
        scopes.back()[varName] = { getType(value), value };
    }

    return value;
}

// Typed variables  
antlrcpp::Any CalcEvalVisitor::visitTypedVarAssignmentExpression(CalcParser::TypedVarAssignmentExpressionContext* ctx) {
    string type = ctx->TYPE()->getText();
    string varName = ctx->NAME()->getText();
    any value = visit(ctx->expr());

    // Check type compatibility
    checkType(type, value);

    // Store the variable
    scopes.back()[varName] = { type, value };
    return value;
}

// Simple IF operator
antlrcpp::Any CalcEvalVisitor::visitOperatorIf(CalcParser::OperatorIfContext* ctx) {
    any condition = visit(ctx->expr());
    if (isTrue(condition)) {
        return visit(ctx->code_block(0));
    }
    else if (ctx->ELSE()) {
        return visit(ctx->code_block(1));
    }
    return nullptr;
}

// Even simplier WHILE operator, BUT I added that you can use "return" as a break!
antlrcpp::Any CalcEvalVisitor::visitOperatorWhile(CalcParser::OperatorWhileContext* ctx) {
    any result;
    while (isTrue(visit(ctx->expr()))) {
        result = visit(ctx->code_block());
        if (hasReturn) break;
    }
    return result;
}

// Function definition!
antlrcpp::Any CalcEvalVisitor::visitFunctionDefenition(CalcParser::FunctionDefenitionContext* ctx) {
    string funcName = ctx->NAME()->getText();

    // Get all of the parameters
    vector<pair<string, string>> params;
    if (ctx->param_list()) {
        for (auto paramCtx : ctx->param_list()->param()) {
            params.emplace_back(paramCtx->TYPE()->getText(), paramCtx->NAME()->getText());
        }
    }

    // Store information about this function (descriptor)
    functions[funcName] = { params, ctx->code_block() };
    return nullptr;
}

// Calling function!
antlrcpp::Any CalcEvalVisitor::visitFunctionCall(CalcParser::FunctionCallContext* ctx) {
    string funcName = ctx->NAME()->getText();

    // Check if this function even exists
    if (functions.find(funcName) == functions.end()) {
        throw runtime_error("Function '" + funcName + "' not defined");
    }

    Function& func = functions[funcName];

    // Check arguments
    vector<any> args;
    if (ctx->args()) {
        for (auto argCtx : ctx->args()->expr()) {
            args.push_back(visit(argCtx));
        }
    }

    if (args.size() != func.parameters.size()) {
        throw runtime_error("Function '" + funcName + "' expects " +
            to_string(func.parameters.size()) + " arguments, got " +
            to_string(args.size()));
    }

    // Enter new scope (watch enterScope function at the very begining)
    enterScope();

    // Add parameters to this new beautiful scope
    for (size_t i = 0; i < args.size(); ++i) {
        string paramType = func.parameters[i].first;
        string paramName = func.parameters[i].second;
        checkType(paramType, args[i]);
        scopes.back()[paramName] = { paramType, args[i] };
    }

    // Execute what is in code_block
    hasReturn = false; // If function has no return 
    any result = visit(func.body);

    // Exit scope
    exitScope();

    if (hasReturn) {
        return returnValue; // If it has return, then return the return this function returns.
    }
    return nullptr;
}

// Print expression that prints expressions
antlrcpp::Any CalcEvalVisitor::visitPrintExpr(CalcParser::PrintExprContext* ctx) {
    any value = visit(ctx->expr());

    if (value.type() == typeid(int)) {
        cout << any_cast<int>(value) << endl;
    }
    else if (value.type() == typeid(double)) {
        cout << any_cast<double>(value) << endl;
    }
    else if (value.type() == typeid(bool)) {
        cout << (any_cast<bool>(value) ? "true" : "false") << endl;
    }
    else {
        cout << "unknown" << endl; // If smthng went wrong
    }
 
    return value;
}

antlrcpp::Any CalcEvalVisitor::visitReturnExpr(CalcParser::ReturnExprContext* ctx) {
    if (ctx->expr()) {
        returnValue = visit(ctx->expr());
    }
    else {
        returnValue = nullptr;
    }
    hasReturn = true;
    return returnValue;
}

antlrcpp::Any CalcEvalVisitor::visitCodeBlock(CalcParser::CodeBlockContext* ctx) {
    //enterScope();
    any result;
    for (auto stmt : ctx->statement()) {
        result = visit(stmt);
        if (hasReturn) break;
    }
    //exitScope();
    return result;
}

antlrcpp::Any CalcEvalVisitor::visitNegativeExpr(CalcParser::NegativeExprContext* ctx) {
    any value = visit(ctx->value());
    if (value.type() == typeid(int)) {
        return -any_cast<int>(value);
    }
    else if (value.type() == typeid(double)) {
        return -any_cast<double>(value);
    }
    throw runtime_error("Cannot apply '-' to this type");
}

antlrcpp::Any CalcEvalVisitor::visitValueExpr(CalcParser::ValueExprContext* ctx) {
    return visit(ctx->value());
}

antlrcpp::Any CalcEvalVisitor::visitIncrement(CalcParser::IncrementContext* ctx) {
    string varName = ctx->NAME()->getText();

    Variable* var = nullptr;
    for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
        if (it->count(varName)) {
            var = &(*it)[varName];
            break;
        }
    }

    if (!var) {
        throw runtime_error("Variable '" + varName + "' not defined");
    }

    if (var->type != "integer") {
        throw runtime_error("++ only valid for integers");
    }

    int val = any_cast<int>(var->value);
    var->value = val + 1;
    return val;
}

antlrcpp::Any CalcEvalVisitor::visitDecrement(CalcParser::DecrementContext* ctx) {
    string varName = ctx->NAME()->getText();

    Variable* var = nullptr;
    for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
        if (it->count(varName)) {
            var = &(*it)[varName];
            break;
        }
    }

    if (!var) {
        throw runtime_error("Variable '" + varName + "' not defined");
    }

    if (var->type != "integer") {
        throw runtime_error("-- only valid for integers");
    }

    int val = any_cast<int>(var->value);
    var->value = val - 1;
    return val; 
}

antlrcpp::Any CalcEvalVisitor::visitOr_expr(CalcParser::Or_exprContext* ctx) {
    any result = visit(ctx->and_expr(0));

    for (size_t i = 1; i < ctx->and_expr().size(); ++i) {
        if (isTrue(result)) {
            return true;
        }
        result = isTrue(result) || isTrue(visit(ctx->and_expr(i)));
    }

    return result;
}

antlrcpp::Any CalcEvalVisitor::visitAnd_expr(CalcParser::And_exprContext* ctx) {
    any result = visit(ctx->equal_expr(0));

    for (size_t i = 1; i < ctx->equal_expr().size(); ++i) {
        if (!isTrue(result)) {
            return false;
        }
        result = isTrue(result) && isTrue(visit(ctx->equal_expr(i)));
    }

    return result;
}

antlrcpp::Any CalcEvalVisitor::visitEqual_expr(CalcParser::Equal_exprContext* ctx) {
    any lVal = visit(ctx->relational_expr(0));

    for (size_t i = 1; i < ctx->relational_expr().size(); ++i) {
        string op = ctx->children[2 * i - 1]->getText();
        any rVal = visit(ctx->relational_expr(i));

        bool comparison;
        if (op == "==") {
            comparison = isEqual(lVal, rVal);
        }
        else { // "!="
            comparison = !isEqual(lVal, rVal);
        }

        lVal = comparison;
    }

    return lVal;
}

antlrcpp::Any CalcEvalVisitor::visitRelational_expr(CalcParser::Relational_exprContext* ctx) {
    any lVal = visit(ctx->addsub_expr(0));

    for (size_t i = 1; i < ctx->addsub_expr().size(); ++i) {
        string op = ctx->children[2 * i - 1]->getText();
        any rVal = visit(ctx->addsub_expr(i));

        bool comparison;
        if (lVal.type() == typeid(int) && rVal.type() == typeid(int)) {
            int l = any_cast<int>(lVal);
            int r = any_cast<int>(rVal);
            if (op == "<") comparison = l < r;
            else if (op == ">") comparison = l > r;
            else if (op == "<=") comparison = l <= r;
            else comparison = l >= r;
        }
        else {
            double l = lVal.type() == typeid(int) ? any_cast<int>(lVal) : any_cast<double>(lVal);
            double r = rVal.type() == typeid(int) ? any_cast<int>(rVal) : any_cast<double>(rVal);
            if (op == "<") comparison = l < r;
            else if (op == ">") comparison = l > r;
            else if (op == "<=") comparison = l <= r;
            else comparison = l >= r;
        }

        lVal = comparison;
    }

    return lVal;
}

antlrcpp::Any CalcEvalVisitor::visitAddsub_expr(CalcParser::Addsub_exprContext* ctx) {
    any lVal = visit(ctx->multdivmod_expr(0));

    for (size_t i = 1; i < ctx->multdivmod_expr().size(); ++i) {
        string op = ctx->children[2 * i - 1]->getText();
        any rVal = visit(ctx->multdivmod_expr(i));

        if (lVal.type() == typeid(int) && rVal.type() == typeid(int)) {
            int l = any_cast<int>(lVal);
            int r = any_cast<int>(rVal);
            lVal = (op == "+") ? l + r : l - r;
        }
        else {
            double l = lVal.type() == typeid(int) ? any_cast<int>(lVal) : any_cast<double>(lVal);
            double r = rVal.type() == typeid(int) ? any_cast<int>(rVal) : any_cast<double>(rVal);
            lVal = (op == "+") ? l + r : l - r;
        }
    }

    return lVal;
}

antlrcpp::Any CalcEvalVisitor::visitMultdivmod_expr(CalcParser::Multdivmod_exprContext* ctx) {
    any lVal = visit(ctx->unary_expr(0));

    for (size_t i = 1; i < ctx->unary_expr().size(); ++i) {
        string op = ctx->children[2 * i - 1]->getText();
        any rVal = visit(ctx->unary_expr(i));

        if (op == "*") {
            if (lVal.type() == typeid(int) && rVal.type() == typeid(int)) {
                lVal = any_cast<int>(lVal) * any_cast<int>(rVal);
            }
            else {
                double l = lVal.type() == typeid(int) ? any_cast<int>(lVal) : any_cast<double>(lVal);
                double r = rVal.type() == typeid(int) ? any_cast<int>(rVal) : any_cast<double>(rVal);
                lVal = l * r;
            }
        }
        else if (op == "/") {
            if (lVal.type() == typeid(int) && rVal.type() == typeid(int)) {
                int r = any_cast<int>(rVal);
                if (r == 0) throw runtime_error("Division by zero");
                lVal = any_cast<int>(lVal) / r;
            }
            else {
                double l = lVal.type() == typeid(int) ? any_cast<int>(lVal) : any_cast<double>(lVal);
                double r = rVal.type() == typeid(int) ? any_cast<int>(rVal) : any_cast<double>(rVal);
                if (fabs(r) < 1e-9) throw runtime_error("Division by zero");
                lVal = l / r;
            }
        }
        else { // "%"
            if (lVal.type() == typeid(int) && rVal.type() == typeid(int)) {
                int r = any_cast<int>(rVal);
                if (r == 0) throw runtime_error("Division by zero in modulo");
                lVal = any_cast<int>(lVal) % r;
            }
            else {
                throw runtime_error("% operation only works with integers");
            }
        }
    }

    return lVal;
}

// Lowest level
antlrcpp::Any CalcEvalVisitor::visitValue(CalcParser::ValueContext* ctx) {
    if (ctx->NAME()) {
        string varName = ctx->NAME()->getText();

        for (auto it = scopes.rbegin(); it != scopes.rend(); ++it) {
            if (it->count(varName)) {
                return (*it)[varName].value;
            }
        }

        throw runtime_error("Variable '" + varName + "' not defined");
    }
    if (ctx->INTEGER()) {
        return stoi(ctx->INTEGER()->getText());
    }
    if (ctx->FLOAT()) {
        return stod(ctx->FLOAT()->getText());
    }
    if (ctx->TRUE()) {
        return true;
    }
    if (ctx->FALSE()) {
        return false;
    }
    if (ctx->func_call()) {
        return visit(ctx->func_call());
    }
    if (ctx->expr()) {
        return visit(ctx->expr());
    }

    throw runtime_error("Unknown value expression");
}


