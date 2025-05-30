
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CalcParser.
 */
class  CalcListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(CalcParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(CalcParser::ProgramContext *ctx) = 0;

  virtual void enterVarAssignmentStat(CalcParser::VarAssignmentStatContext *ctx) = 0;
  virtual void exitVarAssignmentStat(CalcParser::VarAssignmentStatContext *ctx) = 0;

  virtual void enterTypedVarAssignmentStat(CalcParser::TypedVarAssignmentStatContext *ctx) = 0;
  virtual void exitTypedVarAssignmentStat(CalcParser::TypedVarAssignmentStatContext *ctx) = 0;

  virtual void enterVarCompoundAssignmentStat(CalcParser::VarCompoundAssignmentStatContext *ctx) = 0;
  virtual void exitVarCompoundAssignmentStat(CalcParser::VarCompoundAssignmentStatContext *ctx) = 0;

  virtual void enterExpressionStat(CalcParser::ExpressionStatContext *ctx) = 0;
  virtual void exitExpressionStat(CalcParser::ExpressionStatContext *ctx) = 0;

  virtual void enterPrintExprStat(CalcParser::PrintExprStatContext *ctx) = 0;
  virtual void exitPrintExprStat(CalcParser::PrintExprStatContext *ctx) = 0;

  virtual void enterReturnExprStat(CalcParser::ReturnExprStatContext *ctx) = 0;
  virtual void exitReturnExprStat(CalcParser::ReturnExprStatContext *ctx) = 0;

  virtual void enterFunctionDefenitinStat(CalcParser::FunctionDefenitinStatContext *ctx) = 0;
  virtual void exitFunctionDefenitinStat(CalcParser::FunctionDefenitinStatContext *ctx) = 0;

  virtual void enterOperatorIfStat(CalcParser::OperatorIfStatContext *ctx) = 0;
  virtual void exitOperatorIfStat(CalcParser::OperatorIfStatContext *ctx) = 0;

  virtual void enterOperatorWhileStat(CalcParser::OperatorWhileStatContext *ctx) = 0;
  virtual void exitOperatorWhileStat(CalcParser::OperatorWhileStatContext *ctx) = 0;

  virtual void enterVarAssignmentExpression(CalcParser::VarAssignmentExpressionContext *ctx) = 0;
  virtual void exitVarAssignmentExpression(CalcParser::VarAssignmentExpressionContext *ctx) = 0;

  virtual void enterTypedVarAssignmentExpression(CalcParser::TypedVarAssignmentExpressionContext *ctx) = 0;
  virtual void exitTypedVarAssignmentExpression(CalcParser::TypedVarAssignmentExpressionContext *ctx) = 0;

  virtual void enterVar_comp_assignment(CalcParser::Var_comp_assignmentContext *ctx) = 0;
  virtual void exitVar_comp_assignment(CalcParser::Var_comp_assignmentContext *ctx) = 0;

  virtual void enterOperatorIf(CalcParser::OperatorIfContext *ctx) = 0;
  virtual void exitOperatorIf(CalcParser::OperatorIfContext *ctx) = 0;

  virtual void enterOperatorWhile(CalcParser::OperatorWhileContext *ctx) = 0;
  virtual void exitOperatorWhile(CalcParser::OperatorWhileContext *ctx) = 0;

  virtual void enterFunctionDefenition(CalcParser::FunctionDefenitionContext *ctx) = 0;
  virtual void exitFunctionDefenition(CalcParser::FunctionDefenitionContext *ctx) = 0;

  virtual void enterFunctionCall(CalcParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(CalcParser::FunctionCallContext *ctx) = 0;

  virtual void enterParam(CalcParser::ParamContext *ctx) = 0;
  virtual void exitParam(CalcParser::ParamContext *ctx) = 0;

  virtual void enterParam_list(CalcParser::Param_listContext *ctx) = 0;
  virtual void exitParam_list(CalcParser::Param_listContext *ctx) = 0;

  virtual void enterArgs(CalcParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(CalcParser::ArgsContext *ctx) = 0;

  virtual void enterPrintExpr(CalcParser::PrintExprContext *ctx) = 0;
  virtual void exitPrintExpr(CalcParser::PrintExprContext *ctx) = 0;

  virtual void enterReturnExpr(CalcParser::ReturnExprContext *ctx) = 0;
  virtual void exitReturnExpr(CalcParser::ReturnExprContext *ctx) = 0;

  virtual void enterCodeBlock(CalcParser::CodeBlockContext *ctx) = 0;
  virtual void exitCodeBlock(CalcParser::CodeBlockContext *ctx) = 0;

  virtual void enterExpr(CalcParser::ExprContext *ctx) = 0;
  virtual void exitExpr(CalcParser::ExprContext *ctx) = 0;

  virtual void enterOr_expr(CalcParser::Or_exprContext *ctx) = 0;
  virtual void exitOr_expr(CalcParser::Or_exprContext *ctx) = 0;

  virtual void enterAnd_expr(CalcParser::And_exprContext *ctx) = 0;
  virtual void exitAnd_expr(CalcParser::And_exprContext *ctx) = 0;

  virtual void enterEqual_expr(CalcParser::Equal_exprContext *ctx) = 0;
  virtual void exitEqual_expr(CalcParser::Equal_exprContext *ctx) = 0;

  virtual void enterRelational_expr(CalcParser::Relational_exprContext *ctx) = 0;
  virtual void exitRelational_expr(CalcParser::Relational_exprContext *ctx) = 0;

  virtual void enterAddsub_expr(CalcParser::Addsub_exprContext *ctx) = 0;
  virtual void exitAddsub_expr(CalcParser::Addsub_exprContext *ctx) = 0;

  virtual void enterMultdivmod_expr(CalcParser::Multdivmod_exprContext *ctx) = 0;
  virtual void exitMultdivmod_expr(CalcParser::Multdivmod_exprContext *ctx) = 0;

  virtual void enterNegativeExpr(CalcParser::NegativeExprContext *ctx) = 0;
  virtual void exitNegativeExpr(CalcParser::NegativeExprContext *ctx) = 0;

  virtual void enterIncrement(CalcParser::IncrementContext *ctx) = 0;
  virtual void exitIncrement(CalcParser::IncrementContext *ctx) = 0;

  virtual void enterDecrement(CalcParser::DecrementContext *ctx) = 0;
  virtual void exitDecrement(CalcParser::DecrementContext *ctx) = 0;

  virtual void enterValueExpr(CalcParser::ValueExprContext *ctx) = 0;
  virtual void exitValueExpr(CalcParser::ValueExprContext *ctx) = 0;

  virtual void enterValue(CalcParser::ValueContext *ctx) = 0;
  virtual void exitValue(CalcParser::ValueContext *ctx) = 0;


};

