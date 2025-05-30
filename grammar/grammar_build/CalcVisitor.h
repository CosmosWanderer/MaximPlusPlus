
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalcParser.
 */
class  CalcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalcParser.
   */
    virtual std::any visitProgram(CalcParser::ProgramContext *context) = 0;

    virtual std::any visitVarAssignmentStat(CalcParser::VarAssignmentStatContext *context) = 0;

    virtual std::any visitTypedVarAssignmentStat(CalcParser::TypedVarAssignmentStatContext *context) = 0;

    virtual std::any visitVarCompoundAssignmentStat(CalcParser::VarCompoundAssignmentStatContext *context) = 0;

    virtual std::any visitExpressionStat(CalcParser::ExpressionStatContext *context) = 0;

    virtual std::any visitPrintExprStat(CalcParser::PrintExprStatContext *context) = 0;

    virtual std::any visitReturnExprStat(CalcParser::ReturnExprStatContext *context) = 0;

    virtual std::any visitFunctionDefenitinStat(CalcParser::FunctionDefenitinStatContext *context) = 0;

    virtual std::any visitOperatorIfStat(CalcParser::OperatorIfStatContext *context) = 0;

    virtual std::any visitOperatorWhileStat(CalcParser::OperatorWhileStatContext *context) = 0;

    virtual std::any visitVarAssignmentExpression(CalcParser::VarAssignmentExpressionContext *context) = 0;

    virtual std::any visitTypedVarAssignmentExpression(CalcParser::TypedVarAssignmentExpressionContext *context) = 0;

    virtual std::any visitVar_comp_assignment(CalcParser::Var_comp_assignmentContext *context) = 0;

    virtual std::any visitOperatorIf(CalcParser::OperatorIfContext *context) = 0;

    virtual std::any visitOperatorWhile(CalcParser::OperatorWhileContext *context) = 0;

    virtual std::any visitFunctionDefenition(CalcParser::FunctionDefenitionContext *context) = 0;

    virtual std::any visitFunctionCall(CalcParser::FunctionCallContext *context) = 0;

    virtual std::any visitParam(CalcParser::ParamContext *context) = 0;

    virtual std::any visitParam_list(CalcParser::Param_listContext *context) = 0;

    virtual std::any visitArgs(CalcParser::ArgsContext *context) = 0;

    virtual std::any visitPrintExpr(CalcParser::PrintExprContext *context) = 0;

    virtual std::any visitReturnExpr(CalcParser::ReturnExprContext *context) = 0;

    virtual std::any visitCodeBlock(CalcParser::CodeBlockContext *context) = 0;

    virtual std::any visitExpr(CalcParser::ExprContext *context) = 0;

    virtual std::any visitOr_expr(CalcParser::Or_exprContext *context) = 0;

    virtual std::any visitAnd_expr(CalcParser::And_exprContext *context) = 0;

    virtual std::any visitEqual_expr(CalcParser::Equal_exprContext *context) = 0;

    virtual std::any visitRelational_expr(CalcParser::Relational_exprContext *context) = 0;

    virtual std::any visitAddsub_expr(CalcParser::Addsub_exprContext *context) = 0;

    virtual std::any visitMultdivmod_expr(CalcParser::Multdivmod_exprContext *context) = 0;

    virtual std::any visitNegativeExpr(CalcParser::NegativeExprContext *context) = 0;

    virtual std::any visitIncrement(CalcParser::IncrementContext *context) = 0;

    virtual std::any visitDecrement(CalcParser::DecrementContext *context) = 0;

    virtual std::any visitValueExpr(CalcParser::ValueExprContext *context) = 0;

    virtual std::any visitValue(CalcParser::ValueContext *context) = 0;


};

