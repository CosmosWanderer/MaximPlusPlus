
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcVisitor.h"


/**
 * This class provides an empty implementation of CalcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalcBaseVisitor : public CalcVisitor {
public:

  virtual std::any visitProgram(CalcParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarAssignmentStat(CalcParser::VarAssignmentStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypedVarAssignmentStat(CalcParser::TypedVarAssignmentStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarCompoundAssignmentStat(CalcParser::VarCompoundAssignmentStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStat(CalcParser::ExpressionStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintExprStat(CalcParser::PrintExprStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnExprStat(CalcParser::ReturnExprStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefenitinStat(CalcParser::FunctionDefenitinStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorIfStat(CalcParser::OperatorIfStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorWhileStat(CalcParser::OperatorWhileStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarAssignmentExpression(CalcParser::VarAssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypedVarAssignmentExpression(CalcParser::TypedVarAssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar_comp_assignment(CalcParser::Var_comp_assignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorIf(CalcParser::OperatorIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOperatorWhile(CalcParser::OperatorWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefenition(CalcParser::FunctionDefenitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(CalcParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(CalcParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam_list(CalcParser::Param_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgs(CalcParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintExpr(CalcParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnExpr(CalcParser::ReturnExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCodeBlock(CalcParser::CodeBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(CalcParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOr_expr(CalcParser::Or_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnd_expr(CalcParser::And_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqual_expr(CalcParser::Equal_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelational_expr(CalcParser::Relational_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddsub_expr(CalcParser::Addsub_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultdivmod_expr(CalcParser::Multdivmod_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegativeExpr(CalcParser::NegativeExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncrement(CalcParser::IncrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecrement(CalcParser::DecrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValueExpr(CalcParser::ValueExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(CalcParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }


};

