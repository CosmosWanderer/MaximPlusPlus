#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <any>
#include <iostream>
#include "CalcBaseVisitor.h"

class CalcEvalVisitor : public CalcBaseVisitor {
public:
    // Serves as variable context
    struct Variable {
        std::string type;
        std::any value;
    };

    // Same for functions
    struct Function {
        std::vector<std::pair<std::string, std::string>> parameters; // type, name
        CalcParser::Code_blockContext* body; // The code block
    };

    // For returns
    bool hasReturn = false;
    std::any returnValue;

    // Storage
    std::unordered_map<std::string, Function> functions;
    std::vector<std::unordered_map<std::string, Variable>> scopes;
    // Need scopes for functions


    // Helper functions
    std::any visitChildren(antlr4::tree::ParseTree* ctx) override;
    void enterScope();
    void exitScope();
    bool isTrue(const std::any& value);
    bool isEqual(const std::any& lhs, const std::any& rhs);
    void checkType(const std::string& expectedType, const std::any& value);
    std::string getType(const std::any& value);

    // Overrides
    antlrcpp::Any visitProgram(CalcParser::ProgramContext* ctx) override;
    antlrcpp::Any visitVarAssignmentStat(CalcParser::VarAssignmentStatContext* ctx) override;
    antlrcpp::Any visitTypedVarAssignmentStat(CalcParser::TypedVarAssignmentStatContext* ctx) override;
    antlrcpp::Any visitVarCompoundAssignmentStat(CalcParser::VarCompoundAssignmentStatContext* ctx) override;
    antlrcpp::Any visitExpressionStat(CalcParser::ExpressionStatContext* ctx) override;
    antlrcpp::Any visitPrintExprStat(CalcParser::PrintExprStatContext* ctx) override;
    antlrcpp::Any visitReturnExprStat(CalcParser::ReturnExprStatContext* ctx) override;
    antlrcpp::Any visitFunctionDefenitinStat(CalcParser::FunctionDefenitinStatContext* ctx) override;
    antlrcpp::Any visitOperatorIfStat(CalcParser::OperatorIfStatContext* ctx) override;
    antlrcpp::Any visitOperatorWhileStat(CalcParser::OperatorWhileStatContext* ctx) override;

    antlrcpp::Any visitVarAssignmentExpression(CalcParser::VarAssignmentExpressionContext* ctx) override;
    antlrcpp::Any visitTypedVarAssignmentExpression(CalcParser::TypedVarAssignmentExpressionContext* ctx) override;
    antlrcpp::Any visitOperatorIf(CalcParser::OperatorIfContext* ctx) override;
    antlrcpp::Any visitOperatorWhile(CalcParser::OperatorWhileContext* ctx) override;
    antlrcpp::Any visitFunctionDefenition(CalcParser::FunctionDefenitionContext* ctx) override;
    antlrcpp::Any visitFunctionCall(CalcParser::FunctionCallContext* ctx) override;
    antlrcpp::Any visitPrintExpr(CalcParser::PrintExprContext* ctx) override;
    antlrcpp::Any visitReturnExpr(CalcParser::ReturnExprContext* ctx) override;
    antlrcpp::Any visitCodeBlock(CalcParser::CodeBlockContext* ctx) override;
    antlrcpp::Any visitNegativeExpr(CalcParser::NegativeExprContext* ctx) override;
    antlrcpp::Any visitValueExpr(CalcParser::ValueExprContext* ctx) override;
    antlrcpp::Any visitIncrement(CalcParser::IncrementContext* ctx) override;
    antlrcpp::Any visitDecrement(CalcParser::DecrementContext* ctx) override;

    antlrcpp::Any visitOr_expr(CalcParser::Or_exprContext* ctx) override;
    antlrcpp::Any visitAnd_expr(CalcParser::And_exprContext* ctx) override;
    antlrcpp::Any visitEqual_expr(CalcParser::Equal_exprContext* ctx) override;
    antlrcpp::Any visitRelational_expr(CalcParser::Relational_exprContext* ctx) override;
    antlrcpp::Any visitAddsub_expr(CalcParser::Addsub_exprContext* ctx) override;
    antlrcpp::Any visitMultdivmod_expr(CalcParser::Multdivmod_exprContext* ctx) override;
    antlrcpp::Any visitValue(CalcParser::ValueContext* ctx) override;
};
