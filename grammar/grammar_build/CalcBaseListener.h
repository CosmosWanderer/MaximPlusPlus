
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcListener.h"


/**
 * This class provides an empty implementation of CalcListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CalcBaseListener : public CalcListener {
public:

  virtual void enterProgram(CalcParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(CalcParser::ProgramContext * /*ctx*/) override { }

  virtual void enterVarAssignmentStat(CalcParser::VarAssignmentStatContext * /*ctx*/) override { }
  virtual void exitVarAssignmentStat(CalcParser::VarAssignmentStatContext * /*ctx*/) override { }

  virtual void enterTypedVarAssignmentStat(CalcParser::TypedVarAssignmentStatContext * /*ctx*/) override { }
  virtual void exitTypedVarAssignmentStat(CalcParser::TypedVarAssignmentStatContext * /*ctx*/) override { }

  virtual void enterVarCompoundAssignmentStat(CalcParser::VarCompoundAssignmentStatContext * /*ctx*/) override { }
  virtual void exitVarCompoundAssignmentStat(CalcParser::VarCompoundAssignmentStatContext * /*ctx*/) override { }

  virtual void enterExpressionStat(CalcParser::ExpressionStatContext * /*ctx*/) override { }
  virtual void exitExpressionStat(CalcParser::ExpressionStatContext * /*ctx*/) override { }

  virtual void enterPrintExprStat(CalcParser::PrintExprStatContext * /*ctx*/) override { }
  virtual void exitPrintExprStat(CalcParser::PrintExprStatContext * /*ctx*/) override { }

  virtual void enterReturnExprStat(CalcParser::ReturnExprStatContext * /*ctx*/) override { }
  virtual void exitReturnExprStat(CalcParser::ReturnExprStatContext * /*ctx*/) override { }

  virtual void enterFunctionDefenitinStat(CalcParser::FunctionDefenitinStatContext * /*ctx*/) override { }
  virtual void exitFunctionDefenitinStat(CalcParser::FunctionDefenitinStatContext * /*ctx*/) override { }

  virtual void enterOperatorIfStat(CalcParser::OperatorIfStatContext * /*ctx*/) override { }
  virtual void exitOperatorIfStat(CalcParser::OperatorIfStatContext * /*ctx*/) override { }

  virtual void enterOperatorWhileStat(CalcParser::OperatorWhileStatContext * /*ctx*/) override { }
  virtual void exitOperatorWhileStat(CalcParser::OperatorWhileStatContext * /*ctx*/) override { }

  virtual void enterVarAssignmentExpression(CalcParser::VarAssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitVarAssignmentExpression(CalcParser::VarAssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterTypedVarAssignmentExpression(CalcParser::TypedVarAssignmentExpressionContext * /*ctx*/) override { }
  virtual void exitTypedVarAssignmentExpression(CalcParser::TypedVarAssignmentExpressionContext * /*ctx*/) override { }

  virtual void enterVar_comp_assignment(CalcParser::Var_comp_assignmentContext * /*ctx*/) override { }
  virtual void exitVar_comp_assignment(CalcParser::Var_comp_assignmentContext * /*ctx*/) override { }

  virtual void enterOperatorIf(CalcParser::OperatorIfContext * /*ctx*/) override { }
  virtual void exitOperatorIf(CalcParser::OperatorIfContext * /*ctx*/) override { }

  virtual void enterOperatorWhile(CalcParser::OperatorWhileContext * /*ctx*/) override { }
  virtual void exitOperatorWhile(CalcParser::OperatorWhileContext * /*ctx*/) override { }

  virtual void enterFunctionDefenition(CalcParser::FunctionDefenitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefenition(CalcParser::FunctionDefenitionContext * /*ctx*/) override { }

  virtual void enterFunctionCall(CalcParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(CalcParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterParam(CalcParser::ParamContext * /*ctx*/) override { }
  virtual void exitParam(CalcParser::ParamContext * /*ctx*/) override { }

  virtual void enterParam_list(CalcParser::Param_listContext * /*ctx*/) override { }
  virtual void exitParam_list(CalcParser::Param_listContext * /*ctx*/) override { }

  virtual void enterArgs(CalcParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(CalcParser::ArgsContext * /*ctx*/) override { }

  virtual void enterPrintExpr(CalcParser::PrintExprContext * /*ctx*/) override { }
  virtual void exitPrintExpr(CalcParser::PrintExprContext * /*ctx*/) override { }

  virtual void enterReturnExpr(CalcParser::ReturnExprContext * /*ctx*/) override { }
  virtual void exitReturnExpr(CalcParser::ReturnExprContext * /*ctx*/) override { }

  virtual void enterCodeBlock(CalcParser::CodeBlockContext * /*ctx*/) override { }
  virtual void exitCodeBlock(CalcParser::CodeBlockContext * /*ctx*/) override { }

  virtual void enterExpr(CalcParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(CalcParser::ExprContext * /*ctx*/) override { }

  virtual void enterOr_expr(CalcParser::Or_exprContext * /*ctx*/) override { }
  virtual void exitOr_expr(CalcParser::Or_exprContext * /*ctx*/) override { }

  virtual void enterAnd_expr(CalcParser::And_exprContext * /*ctx*/) override { }
  virtual void exitAnd_expr(CalcParser::And_exprContext * /*ctx*/) override { }

  virtual void enterEqual_expr(CalcParser::Equal_exprContext * /*ctx*/) override { }
  virtual void exitEqual_expr(CalcParser::Equal_exprContext * /*ctx*/) override { }

  virtual void enterRelational_expr(CalcParser::Relational_exprContext * /*ctx*/) override { }
  virtual void exitRelational_expr(CalcParser::Relational_exprContext * /*ctx*/) override { }

  virtual void enterAddsub_expr(CalcParser::Addsub_exprContext * /*ctx*/) override { }
  virtual void exitAddsub_expr(CalcParser::Addsub_exprContext * /*ctx*/) override { }

  virtual void enterMultdivmod_expr(CalcParser::Multdivmod_exprContext * /*ctx*/) override { }
  virtual void exitMultdivmod_expr(CalcParser::Multdivmod_exprContext * /*ctx*/) override { }

  virtual void enterNegativeExpr(CalcParser::NegativeExprContext * /*ctx*/) override { }
  virtual void exitNegativeExpr(CalcParser::NegativeExprContext * /*ctx*/) override { }

  virtual void enterIncrement(CalcParser::IncrementContext * /*ctx*/) override { }
  virtual void exitIncrement(CalcParser::IncrementContext * /*ctx*/) override { }

  virtual void enterDecrement(CalcParser::DecrementContext * /*ctx*/) override { }
  virtual void exitDecrement(CalcParser::DecrementContext * /*ctx*/) override { }

  virtual void enterValueExpr(CalcParser::ValueExprContext * /*ctx*/) override { }
  virtual void exitValueExpr(CalcParser::ValueExprContext * /*ctx*/) override { }

  virtual void enterValue(CalcParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(CalcParser::ValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

