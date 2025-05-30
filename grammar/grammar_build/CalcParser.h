
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CalcParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    IF = 27, ELSE = 28, WHILE = 29, PRINT = 30, RETURN = 31, DEF = 32, LBRACK = 33, 
    RBRACK = 34, TRUE = 35, FALSE = 36, TYPE = 37, NAME = 38, INTEGER = 39, 
    FLOAT = 40, WS = 41, SEP = 42
  };

  enum {
    RuleProg = 0, RuleStatement = 1, RuleVar_assignment = 2, RuleTyped_var_assignment = 3, 
    RuleVar_comp_assignment = 4, RuleOperator_if = 5, RuleOperator_while = 6, 
    RuleFunct_def = 7, RuleFunc_call = 8, RuleParam = 9, RuleParam_list = 10, 
    RuleArgs = 11, RulePrint_expression = 12, RuleReturn_expression = 13, 
    RuleCode_block = 14, RuleExpr = 15, RuleOr_expr = 16, RuleAnd_expr = 17, 
    RuleEqual_expr = 18, RuleRelational_expr = 19, RuleAddsub_expr = 20, 
    RuleMultdivmod_expr = 21, RuleUnary_expr = 22, RuleValue = 23
  };

  explicit CalcParser(antlr4::TokenStream *input);

  CalcParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CalcParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class StatementContext;
  class Var_assignmentContext;
  class Typed_var_assignmentContext;
  class Var_comp_assignmentContext;
  class Operator_ifContext;
  class Operator_whileContext;
  class Funct_defContext;
  class Func_callContext;
  class ParamContext;
  class Param_listContext;
  class ArgsContext;
  class Print_expressionContext;
  class Return_expressionContext;
  class Code_blockContext;
  class ExprContext;
  class Or_exprContext;
  class And_exprContext;
  class Equal_exprContext;
  class Relational_exprContext;
  class Addsub_exprContext;
  class Multdivmod_exprContext;
  class Unary_exprContext;
  class ValueContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgContext() = default;
    void copyFrom(ProgContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProgramContext : public ProgContext {
  public:
    ProgramContext(ProgContext *ctx);

    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgContext* prog();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarCompoundAssignmentStatContext : public StatementContext {
  public:
    VarCompoundAssignmentStatContext(StatementContext *ctx);

    Var_comp_assignmentContext *var_comp_assignment();
    antlr4::tree::TerminalNode *SEP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarAssignmentStatContext : public StatementContext {
  public:
    VarAssignmentStatContext(StatementContext *ctx);

    Var_assignmentContext *var_assignment();
    antlr4::tree::TerminalNode *SEP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExpressionStatContext : public StatementContext {
  public:
    ExpressionStatContext(StatementContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperatorIfStatContext : public StatementContext {
  public:
    OperatorIfStatContext(StatementContext *ctx);

    Operator_ifContext *operator_if();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrintExprStatContext : public StatementContext {
  public:
    PrintExprStatContext(StatementContext *ctx);

    Print_expressionContext *print_expression();
    antlr4::tree::TerminalNode *SEP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TypedVarAssignmentStatContext : public StatementContext {
  public:
    TypedVarAssignmentStatContext(StatementContext *ctx);

    Typed_var_assignmentContext *typed_var_assignment();
    antlr4::tree::TerminalNode *SEP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionDefenitinStatContext : public StatementContext {
  public:
    FunctionDefenitinStatContext(StatementContext *ctx);

    Funct_defContext *funct_def();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperatorWhileStatContext : public StatementContext {
  public:
    OperatorWhileStatContext(StatementContext *ctx);

    Operator_whileContext *operator_while();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReturnExprStatContext : public StatementContext {
  public:
    ReturnExprStatContext(StatementContext *ctx);

    Return_expressionContext *return_expression();
    antlr4::tree::TerminalNode *SEP();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  Var_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Var_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Var_assignmentContext() = default;
    void copyFrom(Var_assignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarAssignmentExpressionContext : public Var_assignmentContext {
  public:
    VarAssignmentExpressionContext(Var_assignmentContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Var_assignmentContext* var_assignment();

  class  Typed_var_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Typed_var_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Typed_var_assignmentContext() = default;
    void copyFrom(Typed_var_assignmentContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypedVarAssignmentExpressionContext : public Typed_var_assignmentContext {
  public:
    TypedVarAssignmentExpressionContext(Typed_var_assignmentContext *ctx);

    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *NAME();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Typed_var_assignmentContext* typed_var_assignment();

  class  Var_comp_assignmentContext : public antlr4::ParserRuleContext {
  public:
    Var_comp_assignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    ExprContext *expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_comp_assignmentContext* var_comp_assignment();

  class  Operator_ifContext : public antlr4::ParserRuleContext {
  public:
    Operator_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Operator_ifContext() = default;
    void copyFrom(Operator_ifContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OperatorIfContext : public Operator_ifContext {
  public:
    OperatorIfContext(Operator_ifContext *ctx);

    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    std::vector<Code_blockContext *> code_block();
    Code_blockContext* code_block(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Operator_ifContext* operator_if();

  class  Operator_whileContext : public antlr4::ParserRuleContext {
  public:
    Operator_whileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Operator_whileContext() = default;
    void copyFrom(Operator_whileContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OperatorWhileContext : public Operator_whileContext {
  public:
    OperatorWhileContext(Operator_whileContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();
    Code_blockContext *code_block();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Operator_whileContext* operator_while();

  class  Funct_defContext : public antlr4::ParserRuleContext {
  public:
    Funct_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Funct_defContext() = default;
    void copyFrom(Funct_defContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionDefenitionContext : public Funct_defContext {
  public:
    FunctionDefenitionContext(Funct_defContext *ctx);

    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *NAME();
    Code_blockContext *code_block();
    Param_listContext *param_list();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Funct_defContext* funct_def();

  class  Func_callContext : public antlr4::ParserRuleContext {
  public:
    Func_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Func_callContext() = default;
    void copyFrom(Func_callContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionCallContext : public Func_callContext {
  public:
    FunctionCallContext(Func_callContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    ArgsContext *args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Func_callContext* func_call();

  class  ParamContext : public antlr4::ParserRuleContext {
  public:
    ParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamContext* param();

  class  Param_listContext : public antlr4::ParserRuleContext {
  public:
    Param_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParamContext *> param();
    ParamContext* param(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Param_listContext* param_list();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  Print_expressionContext : public antlr4::ParserRuleContext {
  public:
    Print_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Print_expressionContext() = default;
    void copyFrom(Print_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PrintExprContext : public Print_expressionContext {
  public:
    PrintExprContext(Print_expressionContext *ctx);

    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *LBRACK();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBRACK();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Print_expressionContext* print_expression();

  class  Return_expressionContext : public antlr4::ParserRuleContext {
  public:
    Return_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Return_expressionContext() = default;
    void copyFrom(Return_expressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ReturnExprContext : public Return_expressionContext {
  public:
    ReturnExprContext(Return_expressionContext *ctx);

    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Return_expressionContext* return_expression();

  class  Code_blockContext : public antlr4::ParserRuleContext {
  public:
    Code_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Code_blockContext() = default;
    void copyFrom(Code_blockContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CodeBlockContext : public Code_blockContext {
  public:
    CodeBlockContext(Code_blockContext *ctx);

    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Code_blockContext* code_block();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_exprContext *or_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();

  class  Or_exprContext : public antlr4::ParserRuleContext {
  public:
    Or_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<And_exprContext *> and_expr();
    And_exprContext* and_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_exprContext* or_expr();

  class  And_exprContext : public antlr4::ParserRuleContext {
  public:
    And_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Equal_exprContext *> equal_expr();
    Equal_exprContext* equal_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_exprContext* and_expr();

  class  Equal_exprContext : public antlr4::ParserRuleContext {
  public:
    Equal_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Relational_exprContext *> relational_expr();
    Relational_exprContext* relational_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Equal_exprContext* equal_expr();

  class  Relational_exprContext : public antlr4::ParserRuleContext {
  public:
    Relational_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Addsub_exprContext *> addsub_expr();
    Addsub_exprContext* addsub_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Relational_exprContext* relational_expr();

  class  Addsub_exprContext : public antlr4::ParserRuleContext {
  public:
    Addsub_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Multdivmod_exprContext *> multdivmod_expr();
    Multdivmod_exprContext* multdivmod_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Addsub_exprContext* addsub_expr();

  class  Multdivmod_exprContext : public antlr4::ParserRuleContext {
  public:
    Multdivmod_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Unary_exprContext *> unary_expr();
    Unary_exprContext* unary_expr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Multdivmod_exprContext* multdivmod_expr();

  class  Unary_exprContext : public antlr4::ParserRuleContext {
  public:
    Unary_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Unary_exprContext() = default;
    void copyFrom(Unary_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ValueExprContext : public Unary_exprContext {
  public:
    ValueExprContext(Unary_exprContext *ctx);

    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegativeExprContext : public Unary_exprContext {
  public:
    NegativeExprContext(Unary_exprContext *ctx);

    ValueContext *value();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecrementContext : public Unary_exprContext {
  public:
    DecrementContext(Unary_exprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncrementContext : public Unary_exprContext {
  public:
    IncrementContext(Unary_exprContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Unary_exprContext* unary_expr();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    Func_callContext *func_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

