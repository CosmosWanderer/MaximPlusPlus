
// Generated from Calc.g4 by ANTLR 4.13.1


#include "CalcListener.h"
#include "CalcVisitor.h"

#include "CalcParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalcParserStaticData final {
  CalcParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcParserStaticData(const CalcParserStaticData&) = delete;
  CalcParserStaticData(CalcParserStaticData&&) = delete;
  CalcParserStaticData& operator=(const CalcParserStaticData&) = delete;
  CalcParserStaticData& operator=(CalcParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CalcParserStaticData *calcParserStaticData = nullptr;

void calcParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calcParserStaticData != nullptr) {
    return;
  }
#else
  assert(calcParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcParserStaticData>(
    std::vector<std::string>{
      "prog", "statement", "var_assignment", "typed_var_assignment", "var_comp_assignment", 
      "operator_if", "operator_while", "funct_def", "func_call", "param", 
      "param_list", "args", "print_expression", "return_expression", "code_block", 
      "expr", "or_expr", "and_expr", "equal_expr", "relational_expr", "addsub_expr", 
      "multdivmod_expr", "unary_expr", "value"
    },
    std::vector<std::string>{
      "", "'='", "'+='", "'-='", "'/='", "'*='", "'%='", "'('", "')'", "','", 
      "'{'", "'}'", "'or'", "'and'", "'=='", "'!='", "'<'", "'>'", "'<='", 
      "'>='", "'+'", "'-'", "'*'", "'/'", "'%'", "'++'", "'--'", "'if'", 
      "'else'", "'while'", "'print'", "'return'", "'def'", "'['", "']'", 
      "'true'", "'false'", "", "", "", "", "", "';'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "IF", "ELSE", "WHILE", "PRINT", 
      "RETURN", "DEF", "LBRACK", "RBRACK", "TRUE", "FALSE", "TYPE", "NAME", 
      "INTEGER", "FLOAT", "WS", "SEP"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,42,232,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,5,0,50,8,0,10,0,12,0,53,9,0,1,0,1,0,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,3,1,78,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,100,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,
  	1,7,1,7,1,7,3,7,112,8,7,1,7,1,7,1,7,1,8,1,8,1,8,3,8,120,8,8,1,8,1,8,1,
  	9,1,9,1,9,1,10,1,10,1,10,5,10,130,8,10,10,10,12,10,133,9,10,1,11,1,11,
  	1,11,5,11,138,8,11,10,11,12,11,141,9,11,1,12,1,12,1,12,1,12,1,12,1,13,
  	1,13,3,13,150,8,13,1,14,1,14,5,14,154,8,14,10,14,12,14,157,9,14,1,14,
  	1,14,1,15,1,15,1,16,1,16,1,16,5,16,166,8,16,10,16,12,16,169,9,16,1,17,
  	1,17,1,17,5,17,174,8,17,10,17,12,17,177,9,17,1,18,1,18,1,18,5,18,182,
  	8,18,10,18,12,18,185,9,18,1,19,1,19,1,19,5,19,190,8,19,10,19,12,19,193,
  	9,19,1,20,1,20,1,20,5,20,198,8,20,10,20,12,20,201,9,20,1,21,1,21,1,21,
  	5,21,206,8,21,10,21,12,21,209,9,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,
  	3,22,218,8,22,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,1,23,3,23,
  	230,8,23,1,23,0,0,24,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,46,0,5,1,0,2,6,1,0,14,15,1,0,16,19,1,0,20,21,1,0,22,24,
  	238,0,51,1,0,0,0,2,77,1,0,0,0,4,79,1,0,0,0,6,83,1,0,0,0,8,88,1,0,0,0,
  	10,92,1,0,0,0,12,101,1,0,0,0,14,107,1,0,0,0,16,116,1,0,0,0,18,123,1,0,
  	0,0,20,126,1,0,0,0,22,134,1,0,0,0,24,142,1,0,0,0,26,147,1,0,0,0,28,151,
  	1,0,0,0,30,160,1,0,0,0,32,162,1,0,0,0,34,170,1,0,0,0,36,178,1,0,0,0,38,
  	186,1,0,0,0,40,194,1,0,0,0,42,202,1,0,0,0,44,217,1,0,0,0,46,229,1,0,0,
  	0,48,50,3,2,1,0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,
  	0,52,54,1,0,0,0,53,51,1,0,0,0,54,55,5,0,0,1,55,1,1,0,0,0,56,57,3,4,2,
  	0,57,58,5,42,0,0,58,78,1,0,0,0,59,60,3,6,3,0,60,61,5,42,0,0,61,78,1,0,
  	0,0,62,63,3,8,4,0,63,64,5,42,0,0,64,78,1,0,0,0,65,66,3,30,15,0,66,67,
  	5,42,0,0,67,78,1,0,0,0,68,69,3,24,12,0,69,70,5,42,0,0,70,78,1,0,0,0,71,
  	72,3,26,13,0,72,73,5,42,0,0,73,78,1,0,0,0,74,78,3,14,7,0,75,78,3,10,5,
  	0,76,78,3,12,6,0,77,56,1,0,0,0,77,59,1,0,0,0,77,62,1,0,0,0,77,65,1,0,
  	0,0,77,68,1,0,0,0,77,71,1,0,0,0,77,74,1,0,0,0,77,75,1,0,0,0,77,76,1,0,
  	0,0,78,3,1,0,0,0,79,80,5,38,0,0,80,81,5,1,0,0,81,82,3,30,15,0,82,5,1,
  	0,0,0,83,84,5,37,0,0,84,85,5,38,0,0,85,86,5,1,0,0,86,87,3,30,15,0,87,
  	7,1,0,0,0,88,89,5,38,0,0,89,90,7,0,0,0,90,91,3,30,15,0,91,9,1,0,0,0,92,
  	93,5,27,0,0,93,94,5,7,0,0,94,95,3,30,15,0,95,96,5,8,0,0,96,99,3,28,14,
  	0,97,98,5,28,0,0,98,100,3,28,14,0,99,97,1,0,0,0,99,100,1,0,0,0,100,11,
  	1,0,0,0,101,102,5,29,0,0,102,103,5,7,0,0,103,104,3,30,15,0,104,105,5,
  	8,0,0,105,106,3,28,14,0,106,13,1,0,0,0,107,108,5,32,0,0,108,109,5,38,
  	0,0,109,111,5,7,0,0,110,112,3,20,10,0,111,110,1,0,0,0,111,112,1,0,0,0,
  	112,113,1,0,0,0,113,114,5,8,0,0,114,115,3,28,14,0,115,15,1,0,0,0,116,
  	117,5,38,0,0,117,119,5,7,0,0,118,120,3,22,11,0,119,118,1,0,0,0,119,120,
  	1,0,0,0,120,121,1,0,0,0,121,122,5,8,0,0,122,17,1,0,0,0,123,124,5,37,0,
  	0,124,125,5,38,0,0,125,19,1,0,0,0,126,131,3,18,9,0,127,128,5,9,0,0,128,
  	130,3,18,9,0,129,127,1,0,0,0,130,133,1,0,0,0,131,129,1,0,0,0,131,132,
  	1,0,0,0,132,21,1,0,0,0,133,131,1,0,0,0,134,139,3,30,15,0,135,136,5,9,
  	0,0,136,138,3,30,15,0,137,135,1,0,0,0,138,141,1,0,0,0,139,137,1,0,0,0,
  	139,140,1,0,0,0,140,23,1,0,0,0,141,139,1,0,0,0,142,143,5,30,0,0,143,144,
  	5,33,0,0,144,145,3,30,15,0,145,146,5,34,0,0,146,25,1,0,0,0,147,149,5,
  	31,0,0,148,150,3,30,15,0,149,148,1,0,0,0,149,150,1,0,0,0,150,27,1,0,0,
  	0,151,155,5,10,0,0,152,154,3,2,1,0,153,152,1,0,0,0,154,157,1,0,0,0,155,
  	153,1,0,0,0,155,156,1,0,0,0,156,158,1,0,0,0,157,155,1,0,0,0,158,159,5,
  	11,0,0,159,29,1,0,0,0,160,161,3,32,16,0,161,31,1,0,0,0,162,167,3,34,17,
  	0,163,164,5,12,0,0,164,166,3,34,17,0,165,163,1,0,0,0,166,169,1,0,0,0,
  	167,165,1,0,0,0,167,168,1,0,0,0,168,33,1,0,0,0,169,167,1,0,0,0,170,175,
  	3,36,18,0,171,172,5,13,0,0,172,174,3,36,18,0,173,171,1,0,0,0,174,177,
  	1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,0,176,35,1,0,0,0,177,175,1,0,0,
  	0,178,183,3,38,19,0,179,180,7,1,0,0,180,182,3,38,19,0,181,179,1,0,0,0,
  	182,185,1,0,0,0,183,181,1,0,0,0,183,184,1,0,0,0,184,37,1,0,0,0,185,183,
  	1,0,0,0,186,191,3,40,20,0,187,188,7,2,0,0,188,190,3,40,20,0,189,187,1,
  	0,0,0,190,193,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,39,1,0,0,0,
  	193,191,1,0,0,0,194,199,3,42,21,0,195,196,7,3,0,0,196,198,3,42,21,0,197,
  	195,1,0,0,0,198,201,1,0,0,0,199,197,1,0,0,0,199,200,1,0,0,0,200,41,1,
  	0,0,0,201,199,1,0,0,0,202,207,3,44,22,0,203,204,7,4,0,0,204,206,3,44,
  	22,0,205,203,1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,
  	208,43,1,0,0,0,209,207,1,0,0,0,210,211,5,21,0,0,211,218,3,46,23,0,212,
  	213,5,38,0,0,213,218,5,25,0,0,214,215,5,38,0,0,215,218,5,26,0,0,216,218,
  	3,46,23,0,217,210,1,0,0,0,217,212,1,0,0,0,217,214,1,0,0,0,217,216,1,0,
  	0,0,218,45,1,0,0,0,219,220,5,7,0,0,220,221,3,30,15,0,221,222,5,8,0,0,
  	222,230,1,0,0,0,223,230,5,38,0,0,224,230,5,39,0,0,225,230,5,40,0,0,226,
  	230,5,35,0,0,227,230,5,36,0,0,228,230,3,16,8,0,229,219,1,0,0,0,229,223,
  	1,0,0,0,229,224,1,0,0,0,229,225,1,0,0,0,229,226,1,0,0,0,229,227,1,0,0,
  	0,229,228,1,0,0,0,230,47,1,0,0,0,17,51,77,99,111,119,131,139,149,155,
  	167,175,183,191,199,207,217,229
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcParserStaticData = staticData.release();
}

}

CalcParser::CalcParser(TokenStream *input) : CalcParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CalcParser::CalcParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CalcParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calcParserStaticData->atn, calcParserStaticData->decisionToDFA, calcParserStaticData->sharedContextCache, options);
}

CalcParser::~CalcParser() {
  delete _interpreter;
}

const atn::ATN& CalcParser::getATN() const {
  return *calcParserStaticData->atn;
}

std::string CalcParser::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcParser::getRuleNames() const {
  return calcParserStaticData->ruleNames;
}

const dfa::Vocabulary& CalcParser::getVocabulary() const {
  return calcParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalcParser::getSerializedATN() const {
  return calcParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

CalcParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ProgContext::getRuleIndex() const {
  return CalcParser::RuleProg;
}

void CalcParser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProgramContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::ProgramContext::EOF() {
  return getToken(CalcParser::EOF, 0);
}

std::vector<CalcParser::StatementContext *> CalcParser::ProgramContext::statement() {
  return getRuleContexts<CalcParser::StatementContext>();
}

CalcParser::StatementContext* CalcParser::ProgramContext::statement(size_t i) {
  return getRuleContext<CalcParser::StatementContext>(i);
}

CalcParser::ProgramContext::ProgramContext(ProgContext *ctx) { copyFrom(ctx); }

void CalcParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}
void CalcParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

std::any CalcParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::ProgContext* CalcParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::ProgramContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2172852895872) != 0)) {
      setState(48);
      statement();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
    match(CalcParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CalcParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::StatementContext::getRuleIndex() const {
  return CalcParser::RuleStatement;
}

void CalcParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarCompoundAssignmentStatContext ------------------------------------------------------------------

CalcParser::Var_comp_assignmentContext* CalcParser::VarCompoundAssignmentStatContext::var_comp_assignment() {
  return getRuleContext<CalcParser::Var_comp_assignmentContext>(0);
}

tree::TerminalNode* CalcParser::VarCompoundAssignmentStatContext::SEP() {
  return getToken(CalcParser::SEP, 0);
}

CalcParser::VarCompoundAssignmentStatContext::VarCompoundAssignmentStatContext(StatementContext *ctx) { copyFrom(ctx); }

void CalcParser::VarCompoundAssignmentStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarCompoundAssignmentStat(this);
}
void CalcParser::VarCompoundAssignmentStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarCompoundAssignmentStat(this);
}

std::any CalcParser::VarCompoundAssignmentStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitVarCompoundAssignmentStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarAssignmentStatContext ------------------------------------------------------------------

CalcParser::Var_assignmentContext* CalcParser::VarAssignmentStatContext::var_assignment() {
  return getRuleContext<CalcParser::Var_assignmentContext>(0);
}

tree::TerminalNode* CalcParser::VarAssignmentStatContext::SEP() {
  return getToken(CalcParser::SEP, 0);
}

CalcParser::VarAssignmentStatContext::VarAssignmentStatContext(StatementContext *ctx) { copyFrom(ctx); }

void CalcParser::VarAssignmentStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarAssignmentStat(this);
}
void CalcParser::VarAssignmentStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarAssignmentStat(this);
}

std::any CalcParser::VarAssignmentStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitVarAssignmentStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExpressionStatContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::ExpressionStatContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::ExpressionStatContext::SEP() {
  return getToken(CalcParser::SEP, 0);
}

CalcParser::ExpressionStatContext::ExpressionStatContext(StatementContext *ctx) { copyFrom(ctx); }

void CalcParser::ExpressionStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStat(this);
}
void CalcParser::ExpressionStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStat(this);
}

std::any CalcParser::ExpressionStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExpressionStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperatorIfStatContext ------------------------------------------------------------------

CalcParser::Operator_ifContext* CalcParser::OperatorIfStatContext::operator_if() {
  return getRuleContext<CalcParser::Operator_ifContext>(0);
}

CalcParser::OperatorIfStatContext::OperatorIfStatContext(StatementContext *ctx) { copyFrom(ctx); }

void CalcParser::OperatorIfStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorIfStat(this);
}
void CalcParser::OperatorIfStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorIfStat(this);
}

std::any CalcParser::OperatorIfStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitOperatorIfStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprStatContext ------------------------------------------------------------------

CalcParser::Print_expressionContext* CalcParser::PrintExprStatContext::print_expression() {
  return getRuleContext<CalcParser::Print_expressionContext>(0);
}

tree::TerminalNode* CalcParser::PrintExprStatContext::SEP() {
  return getToken(CalcParser::SEP, 0);
}

CalcParser::PrintExprStatContext::PrintExprStatContext(StatementContext *ctx) { copyFrom(ctx); }

void CalcParser::PrintExprStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintExprStat(this);
}
void CalcParser::PrintExprStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintExprStat(this);
}

std::any CalcParser::PrintExprStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPrintExprStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypedVarAssignmentStatContext ------------------------------------------------------------------

CalcParser::Typed_var_assignmentContext* CalcParser::TypedVarAssignmentStatContext::typed_var_assignment() {
  return getRuleContext<CalcParser::Typed_var_assignmentContext>(0);
}

tree::TerminalNode* CalcParser::TypedVarAssignmentStatContext::SEP() {
  return getToken(CalcParser::SEP, 0);
}

CalcParser::TypedVarAssignmentStatContext::TypedVarAssignmentStatContext(StatementContext *ctx) { copyFrom(ctx); }

void CalcParser::TypedVarAssignmentStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedVarAssignmentStat(this);
}
void CalcParser::TypedVarAssignmentStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedVarAssignmentStat(this);
}

std::any CalcParser::TypedVarAssignmentStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitTypedVarAssignmentStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionDefenitinStatContext ------------------------------------------------------------------

CalcParser::Funct_defContext* CalcParser::FunctionDefenitinStatContext::funct_def() {
  return getRuleContext<CalcParser::Funct_defContext>(0);
}

CalcParser::FunctionDefenitinStatContext::FunctionDefenitinStatContext(StatementContext *ctx) { copyFrom(ctx); }

void CalcParser::FunctionDefenitinStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefenitinStat(this);
}
void CalcParser::FunctionDefenitinStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefenitinStat(this);
}

std::any CalcParser::FunctionDefenitinStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFunctionDefenitinStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperatorWhileStatContext ------------------------------------------------------------------

CalcParser::Operator_whileContext* CalcParser::OperatorWhileStatContext::operator_while() {
  return getRuleContext<CalcParser::Operator_whileContext>(0);
}

CalcParser::OperatorWhileStatContext::OperatorWhileStatContext(StatementContext *ctx) { copyFrom(ctx); }

void CalcParser::OperatorWhileStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorWhileStat(this);
}
void CalcParser::OperatorWhileStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorWhileStat(this);
}

std::any CalcParser::OperatorWhileStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitOperatorWhileStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnExprStatContext ------------------------------------------------------------------

CalcParser::Return_expressionContext* CalcParser::ReturnExprStatContext::return_expression() {
  return getRuleContext<CalcParser::Return_expressionContext>(0);
}

tree::TerminalNode* CalcParser::ReturnExprStatContext::SEP() {
  return getToken(CalcParser::SEP, 0);
}

CalcParser::ReturnExprStatContext::ReturnExprStatContext(StatementContext *ctx) { copyFrom(ctx); }

void CalcParser::ReturnExprStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnExprStat(this);
}
void CalcParser::ReturnExprStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnExprStat(this);
}

std::any CalcParser::ReturnExprStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitReturnExprStat(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::StatementContext* CalcParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcParser::VarAssignmentStatContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(56);
      var_assignment();
      setState(57);
      match(CalcParser::SEP);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcParser::TypedVarAssignmentStatContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(59);
      typed_var_assignment();
      setState(60);
      match(CalcParser::SEP);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CalcParser::VarCompoundAssignmentStatContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(62);
      var_comp_assignment();
      setState(63);
      match(CalcParser::SEP);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CalcParser::ExpressionStatContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(65);
      expr();
      setState(66);
      match(CalcParser::SEP);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CalcParser::PrintExprStatContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(68);
      print_expression();
      setState(69);
      match(CalcParser::SEP);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CalcParser::ReturnExprStatContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(71);
      return_expression();
      setState(72);
      match(CalcParser::SEP);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CalcParser::FunctionDefenitinStatContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(74);
      funct_def();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CalcParser::OperatorIfStatContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(75);
      operator_if();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<CalcParser::OperatorWhileStatContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(76);
      operator_while();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_assignmentContext ------------------------------------------------------------------

CalcParser::Var_assignmentContext::Var_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Var_assignmentContext::getRuleIndex() const {
  return CalcParser::RuleVar_assignment;
}

void CalcParser::Var_assignmentContext::copyFrom(Var_assignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarAssignmentExpressionContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::VarAssignmentExpressionContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

CalcParser::ExprContext* CalcParser::VarAssignmentExpressionContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::VarAssignmentExpressionContext::VarAssignmentExpressionContext(Var_assignmentContext *ctx) { copyFrom(ctx); }

void CalcParser::VarAssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarAssignmentExpression(this);
}
void CalcParser::VarAssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarAssignmentExpression(this);
}

std::any CalcParser::VarAssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitVarAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Var_assignmentContext* CalcParser::var_assignment() {
  Var_assignmentContext *_localctx = _tracker.createInstance<Var_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 4, CalcParser::RuleVar_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::VarAssignmentExpressionContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(CalcParser::NAME);
    setState(80);
    match(CalcParser::T__0);
    setState(81);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Typed_var_assignmentContext ------------------------------------------------------------------

CalcParser::Typed_var_assignmentContext::Typed_var_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Typed_var_assignmentContext::getRuleIndex() const {
  return CalcParser::RuleTyped_var_assignment;
}

void CalcParser::Typed_var_assignmentContext::copyFrom(Typed_var_assignmentContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypedVarAssignmentExpressionContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::TypedVarAssignmentExpressionContext::TYPE() {
  return getToken(CalcParser::TYPE, 0);
}

tree::TerminalNode* CalcParser::TypedVarAssignmentExpressionContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

CalcParser::ExprContext* CalcParser::TypedVarAssignmentExpressionContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::TypedVarAssignmentExpressionContext::TypedVarAssignmentExpressionContext(Typed_var_assignmentContext *ctx) { copyFrom(ctx); }

void CalcParser::TypedVarAssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypedVarAssignmentExpression(this);
}
void CalcParser::TypedVarAssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypedVarAssignmentExpression(this);
}

std::any CalcParser::TypedVarAssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitTypedVarAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Typed_var_assignmentContext* CalcParser::typed_var_assignment() {
  Typed_var_assignmentContext *_localctx = _tracker.createInstance<Typed_var_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 6, CalcParser::RuleTyped_var_assignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::TypedVarAssignmentExpressionContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(CalcParser::TYPE);
    setState(84);
    match(CalcParser::NAME);
    setState(85);
    match(CalcParser::T__0);
    setState(86);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_comp_assignmentContext ------------------------------------------------------------------

CalcParser::Var_comp_assignmentContext::Var_comp_assignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::Var_comp_assignmentContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

CalcParser::ExprContext* CalcParser::Var_comp_assignmentContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}


size_t CalcParser::Var_comp_assignmentContext::getRuleIndex() const {
  return CalcParser::RuleVar_comp_assignment;
}

void CalcParser::Var_comp_assignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_comp_assignment(this);
}

void CalcParser::Var_comp_assignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_comp_assignment(this);
}


std::any CalcParser::Var_comp_assignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitVar_comp_assignment(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Var_comp_assignmentContext* CalcParser::var_comp_assignment() {
  Var_comp_assignmentContext *_localctx = _tracker.createInstance<Var_comp_assignmentContext>(_ctx, getState());
  enterRule(_localctx, 8, CalcParser::RuleVar_comp_assignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(CalcParser::NAME);
    setState(89);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 124) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(90);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operator_ifContext ------------------------------------------------------------------

CalcParser::Operator_ifContext::Operator_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Operator_ifContext::getRuleIndex() const {
  return CalcParser::RuleOperator_if;
}

void CalcParser::Operator_ifContext::copyFrom(Operator_ifContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OperatorIfContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::OperatorIfContext::IF() {
  return getToken(CalcParser::IF, 0);
}

CalcParser::ExprContext* CalcParser::OperatorIfContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

std::vector<CalcParser::Code_blockContext *> CalcParser::OperatorIfContext::code_block() {
  return getRuleContexts<CalcParser::Code_blockContext>();
}

CalcParser::Code_blockContext* CalcParser::OperatorIfContext::code_block(size_t i) {
  return getRuleContext<CalcParser::Code_blockContext>(i);
}

tree::TerminalNode* CalcParser::OperatorIfContext::ELSE() {
  return getToken(CalcParser::ELSE, 0);
}

CalcParser::OperatorIfContext::OperatorIfContext(Operator_ifContext *ctx) { copyFrom(ctx); }

void CalcParser::OperatorIfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorIf(this);
}
void CalcParser::OperatorIfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorIf(this);
}

std::any CalcParser::OperatorIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitOperatorIf(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Operator_ifContext* CalcParser::operator_if() {
  Operator_ifContext *_localctx = _tracker.createInstance<Operator_ifContext>(_ctx, getState());
  enterRule(_localctx, 10, CalcParser::RuleOperator_if);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::OperatorIfContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(CalcParser::IF);
    setState(93);
    match(CalcParser::T__6);
    setState(94);
    expr();
    setState(95);
    match(CalcParser::T__7);
    setState(96);
    code_block();
    setState(99);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CalcParser::ELSE) {
      setState(97);
      match(CalcParser::ELSE);
      setState(98);
      code_block();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Operator_whileContext ------------------------------------------------------------------

CalcParser::Operator_whileContext::Operator_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Operator_whileContext::getRuleIndex() const {
  return CalcParser::RuleOperator_while;
}

void CalcParser::Operator_whileContext::copyFrom(Operator_whileContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OperatorWhileContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::OperatorWhileContext::WHILE() {
  return getToken(CalcParser::WHILE, 0);
}

CalcParser::ExprContext* CalcParser::OperatorWhileContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::Code_blockContext* CalcParser::OperatorWhileContext::code_block() {
  return getRuleContext<CalcParser::Code_blockContext>(0);
}

CalcParser::OperatorWhileContext::OperatorWhileContext(Operator_whileContext *ctx) { copyFrom(ctx); }

void CalcParser::OperatorWhileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorWhile(this);
}
void CalcParser::OperatorWhileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorWhile(this);
}

std::any CalcParser::OperatorWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitOperatorWhile(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Operator_whileContext* CalcParser::operator_while() {
  Operator_whileContext *_localctx = _tracker.createInstance<Operator_whileContext>(_ctx, getState());
  enterRule(_localctx, 12, CalcParser::RuleOperator_while);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::OperatorWhileContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(CalcParser::WHILE);
    setState(102);
    match(CalcParser::T__6);
    setState(103);
    expr();
    setState(104);
    match(CalcParser::T__7);
    setState(105);
    code_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Funct_defContext ------------------------------------------------------------------

CalcParser::Funct_defContext::Funct_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Funct_defContext::getRuleIndex() const {
  return CalcParser::RuleFunct_def;
}

void CalcParser::Funct_defContext::copyFrom(Funct_defContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionDefenitionContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::FunctionDefenitionContext::DEF() {
  return getToken(CalcParser::DEF, 0);
}

tree::TerminalNode* CalcParser::FunctionDefenitionContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

CalcParser::Code_blockContext* CalcParser::FunctionDefenitionContext::code_block() {
  return getRuleContext<CalcParser::Code_blockContext>(0);
}

CalcParser::Param_listContext* CalcParser::FunctionDefenitionContext::param_list() {
  return getRuleContext<CalcParser::Param_listContext>(0);
}

CalcParser::FunctionDefenitionContext::FunctionDefenitionContext(Funct_defContext *ctx) { copyFrom(ctx); }

void CalcParser::FunctionDefenitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefenition(this);
}
void CalcParser::FunctionDefenitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefenition(this);
}

std::any CalcParser::FunctionDefenitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFunctionDefenition(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Funct_defContext* CalcParser::funct_def() {
  Funct_defContext *_localctx = _tracker.createInstance<Funct_defContext>(_ctx, getState());
  enterRule(_localctx, 14, CalcParser::RuleFunct_def);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::FunctionDefenitionContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(CalcParser::DEF);
    setState(108);
    match(CalcParser::NAME);
    setState(109);
    match(CalcParser::T__6);
    setState(111);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CalcParser::TYPE) {
      setState(110);
      param_list();
    }
    setState(113);
    match(CalcParser::T__7);
    setState(114);
    code_block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_callContext ------------------------------------------------------------------

CalcParser::Func_callContext::Func_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Func_callContext::getRuleIndex() const {
  return CalcParser::RuleFunc_call;
}

void CalcParser::Func_callContext::copyFrom(Func_callContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::FunctionCallContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

CalcParser::ArgsContext* CalcParser::FunctionCallContext::args() {
  return getRuleContext<CalcParser::ArgsContext>(0);
}

CalcParser::FunctionCallContext::FunctionCallContext(Func_callContext *ctx) { copyFrom(ctx); }

void CalcParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}
void CalcParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

std::any CalcParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Func_callContext* CalcParser::func_call() {
  Func_callContext *_localctx = _tracker.createInstance<Func_callContext>(_ctx, getState());
  enterRule(_localctx, 16, CalcParser::RuleFunc_call);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::FunctionCallContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(CalcParser::NAME);
    setState(117);
    match(CalcParser::T__6);
    setState(119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2027226660992) != 0)) {
      setState(118);
      args();
    }
    setState(121);
    match(CalcParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

CalcParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcParser::ParamContext::TYPE() {
  return getToken(CalcParser::TYPE, 0);
}

tree::TerminalNode* CalcParser::ParamContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}


size_t CalcParser::ParamContext::getRuleIndex() const {
  return CalcParser::RuleParam;
}

void CalcParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void CalcParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


std::any CalcParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ParamContext* CalcParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 18, CalcParser::RuleParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(CalcParser::TYPE);
    setState(124);
    match(CalcParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Param_listContext ------------------------------------------------------------------

CalcParser::Param_listContext::Param_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::ParamContext *> CalcParser::Param_listContext::param() {
  return getRuleContexts<CalcParser::ParamContext>();
}

CalcParser::ParamContext* CalcParser::Param_listContext::param(size_t i) {
  return getRuleContext<CalcParser::ParamContext>(i);
}


size_t CalcParser::Param_listContext::getRuleIndex() const {
  return CalcParser::RuleParam_list;
}

void CalcParser::Param_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam_list(this);
}

void CalcParser::Param_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam_list(this);
}


std::any CalcParser::Param_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitParam_list(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Param_listContext* CalcParser::param_list() {
  Param_listContext *_localctx = _tracker.createInstance<Param_listContext>(_ctx, getState());
  enterRule(_localctx, 20, CalcParser::RuleParam_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    param();
    setState(131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::T__8) {
      setState(127);
      match(CalcParser::T__8);
      setState(128);
      param();
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

CalcParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::ExprContext *> CalcParser::ArgsContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::ArgsContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}


size_t CalcParser::ArgsContext::getRuleIndex() const {
  return CalcParser::RuleArgs;
}

void CalcParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void CalcParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


std::any CalcParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ArgsContext* CalcParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 22, CalcParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    expr();
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::T__8) {
      setState(135);
      match(CalcParser::T__8);
      setState(136);
      expr();
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_expressionContext ------------------------------------------------------------------

CalcParser::Print_expressionContext::Print_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Print_expressionContext::getRuleIndex() const {
  return CalcParser::RulePrint_expression;
}

void CalcParser::Print_expressionContext::copyFrom(Print_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::PrintExprContext::PRINT() {
  return getToken(CalcParser::PRINT, 0);
}

tree::TerminalNode* CalcParser::PrintExprContext::LBRACK() {
  return getToken(CalcParser::LBRACK, 0);
}

CalcParser::ExprContext* CalcParser::PrintExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::PrintExprContext::RBRACK() {
  return getToken(CalcParser::RBRACK, 0);
}

CalcParser::PrintExprContext::PrintExprContext(Print_expressionContext *ctx) { copyFrom(ctx); }

void CalcParser::PrintExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintExpr(this);
}
void CalcParser::PrintExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintExpr(this);
}

std::any CalcParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Print_expressionContext* CalcParser::print_expression() {
  Print_expressionContext *_localctx = _tracker.createInstance<Print_expressionContext>(_ctx, getState());
  enterRule(_localctx, 24, CalcParser::RulePrint_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::PrintExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(CalcParser::PRINT);
    setState(143);
    match(CalcParser::LBRACK);
    setState(144);
    expr();
    setState(145);
    match(CalcParser::RBRACK);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_expressionContext ------------------------------------------------------------------

CalcParser::Return_expressionContext::Return_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Return_expressionContext::getRuleIndex() const {
  return CalcParser::RuleReturn_expression;
}

void CalcParser::Return_expressionContext::copyFrom(Return_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ReturnExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::ReturnExprContext::RETURN() {
  return getToken(CalcParser::RETURN, 0);
}

CalcParser::ExprContext* CalcParser::ReturnExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::ReturnExprContext::ReturnExprContext(Return_expressionContext *ctx) { copyFrom(ctx); }

void CalcParser::ReturnExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnExpr(this);
}
void CalcParser::ReturnExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnExpr(this);
}

std::any CalcParser::ReturnExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitReturnExpr(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Return_expressionContext* CalcParser::return_expression() {
  Return_expressionContext *_localctx = _tracker.createInstance<Return_expressionContext>(_ctx, getState());
  enterRule(_localctx, 26, CalcParser::RuleReturn_expression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::ReturnExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(CalcParser::RETURN);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2027226660992) != 0)) {
      setState(148);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Code_blockContext ------------------------------------------------------------------

CalcParser::Code_blockContext::Code_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Code_blockContext::getRuleIndex() const {
  return CalcParser::RuleCode_block;
}

void CalcParser::Code_blockContext::copyFrom(Code_blockContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CodeBlockContext ------------------------------------------------------------------

std::vector<CalcParser::StatementContext *> CalcParser::CodeBlockContext::statement() {
  return getRuleContexts<CalcParser::StatementContext>();
}

CalcParser::StatementContext* CalcParser::CodeBlockContext::statement(size_t i) {
  return getRuleContext<CalcParser::StatementContext>(i);
}

CalcParser::CodeBlockContext::CodeBlockContext(Code_blockContext *ctx) { copyFrom(ctx); }

void CalcParser::CodeBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCodeBlock(this);
}
void CalcParser::CodeBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCodeBlock(this);
}

std::any CalcParser::CodeBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitCodeBlock(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Code_blockContext* CalcParser::code_block() {
  Code_blockContext *_localctx = _tracker.createInstance<Code_blockContext>(_ctx, getState());
  enterRule(_localctx, 28, CalcParser::RuleCode_block);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::CodeBlockContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(CalcParser::T__9);
    setState(155);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2172852895872) != 0)) {
      setState(152);
      statement();
      setState(157);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(158);
    match(CalcParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CalcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcParser::Or_exprContext* CalcParser::ExprContext::or_expr() {
  return getRuleContext<CalcParser::Or_exprContext>(0);
}


size_t CalcParser::ExprContext::getRuleIndex() const {
  return CalcParser::RuleExpr;
}

void CalcParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void CalcParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any CalcParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ExprContext* CalcParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 30, CalcParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    or_expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Or_exprContext ------------------------------------------------------------------

CalcParser::Or_exprContext::Or_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::And_exprContext *> CalcParser::Or_exprContext::and_expr() {
  return getRuleContexts<CalcParser::And_exprContext>();
}

CalcParser::And_exprContext* CalcParser::Or_exprContext::and_expr(size_t i) {
  return getRuleContext<CalcParser::And_exprContext>(i);
}


size_t CalcParser::Or_exprContext::getRuleIndex() const {
  return CalcParser::RuleOr_expr;
}

void CalcParser::Or_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr_expr(this);
}

void CalcParser::Or_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr_expr(this);
}


std::any CalcParser::Or_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitOr_expr(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Or_exprContext* CalcParser::or_expr() {
  Or_exprContext *_localctx = _tracker.createInstance<Or_exprContext>(_ctx, getState());
  enterRule(_localctx, 32, CalcParser::RuleOr_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    and_expr();
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::T__11) {
      setState(163);
      match(CalcParser::T__11);
      setState(164);
      and_expr();
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- And_exprContext ------------------------------------------------------------------

CalcParser::And_exprContext::And_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::Equal_exprContext *> CalcParser::And_exprContext::equal_expr() {
  return getRuleContexts<CalcParser::Equal_exprContext>();
}

CalcParser::Equal_exprContext* CalcParser::And_exprContext::equal_expr(size_t i) {
  return getRuleContext<CalcParser::Equal_exprContext>(i);
}


size_t CalcParser::And_exprContext::getRuleIndex() const {
  return CalcParser::RuleAnd_expr;
}

void CalcParser::And_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd_expr(this);
}

void CalcParser::And_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd_expr(this);
}


std::any CalcParser::And_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAnd_expr(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::And_exprContext* CalcParser::and_expr() {
  And_exprContext *_localctx = _tracker.createInstance<And_exprContext>(_ctx, getState());
  enterRule(_localctx, 34, CalcParser::RuleAnd_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    equal_expr();
    setState(175);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::T__12) {
      setState(171);
      match(CalcParser::T__12);
      setState(172);
      equal_expr();
      setState(177);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Equal_exprContext ------------------------------------------------------------------

CalcParser::Equal_exprContext::Equal_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::Relational_exprContext *> CalcParser::Equal_exprContext::relational_expr() {
  return getRuleContexts<CalcParser::Relational_exprContext>();
}

CalcParser::Relational_exprContext* CalcParser::Equal_exprContext::relational_expr(size_t i) {
  return getRuleContext<CalcParser::Relational_exprContext>(i);
}


size_t CalcParser::Equal_exprContext::getRuleIndex() const {
  return CalcParser::RuleEqual_expr;
}

void CalcParser::Equal_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqual_expr(this);
}

void CalcParser::Equal_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqual_expr(this);
}


std::any CalcParser::Equal_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitEqual_expr(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Equal_exprContext* CalcParser::equal_expr() {
  Equal_exprContext *_localctx = _tracker.createInstance<Equal_exprContext>(_ctx, getState());
  enterRule(_localctx, 36, CalcParser::RuleEqual_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    relational_expr();
    setState(183);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::T__13

    || _la == CalcParser::T__14) {
      setState(179);
      _la = _input->LA(1);
      if (!(_la == CalcParser::T__13

      || _la == CalcParser::T__14)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(180);
      relational_expr();
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Relational_exprContext ------------------------------------------------------------------

CalcParser::Relational_exprContext::Relational_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::Addsub_exprContext *> CalcParser::Relational_exprContext::addsub_expr() {
  return getRuleContexts<CalcParser::Addsub_exprContext>();
}

CalcParser::Addsub_exprContext* CalcParser::Relational_exprContext::addsub_expr(size_t i) {
  return getRuleContext<CalcParser::Addsub_exprContext>(i);
}


size_t CalcParser::Relational_exprContext::getRuleIndex() const {
  return CalcParser::RuleRelational_expr;
}

void CalcParser::Relational_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational_expr(this);
}

void CalcParser::Relational_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational_expr(this);
}


std::any CalcParser::Relational_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitRelational_expr(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Relational_exprContext* CalcParser::relational_expr() {
  Relational_exprContext *_localctx = _tracker.createInstance<Relational_exprContext>(_ctx, getState());
  enterRule(_localctx, 38, CalcParser::RuleRelational_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    addsub_expr();
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 983040) != 0)) {
      setState(187);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 983040) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(188);
      addsub_expr();
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Addsub_exprContext ------------------------------------------------------------------

CalcParser::Addsub_exprContext::Addsub_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::Multdivmod_exprContext *> CalcParser::Addsub_exprContext::multdivmod_expr() {
  return getRuleContexts<CalcParser::Multdivmod_exprContext>();
}

CalcParser::Multdivmod_exprContext* CalcParser::Addsub_exprContext::multdivmod_expr(size_t i) {
  return getRuleContext<CalcParser::Multdivmod_exprContext>(i);
}


size_t CalcParser::Addsub_exprContext::getRuleIndex() const {
  return CalcParser::RuleAddsub_expr;
}

void CalcParser::Addsub_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddsub_expr(this);
}

void CalcParser::Addsub_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddsub_expr(this);
}


std::any CalcParser::Addsub_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAddsub_expr(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Addsub_exprContext* CalcParser::addsub_expr() {
  Addsub_exprContext *_localctx = _tracker.createInstance<Addsub_exprContext>(_ctx, getState());
  enterRule(_localctx, 40, CalcParser::RuleAddsub_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    multdivmod_expr();
    setState(199);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::T__19

    || _la == CalcParser::T__20) {
      setState(195);
      _la = _input->LA(1);
      if (!(_la == CalcParser::T__19

      || _la == CalcParser::T__20)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(196);
      multdivmod_expr();
      setState(201);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Multdivmod_exprContext ------------------------------------------------------------------

CalcParser::Multdivmod_exprContext::Multdivmod_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CalcParser::Unary_exprContext *> CalcParser::Multdivmod_exprContext::unary_expr() {
  return getRuleContexts<CalcParser::Unary_exprContext>();
}

CalcParser::Unary_exprContext* CalcParser::Multdivmod_exprContext::unary_expr(size_t i) {
  return getRuleContext<CalcParser::Unary_exprContext>(i);
}


size_t CalcParser::Multdivmod_exprContext::getRuleIndex() const {
  return CalcParser::RuleMultdivmod_expr;
}

void CalcParser::Multdivmod_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultdivmod_expr(this);
}

void CalcParser::Multdivmod_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultdivmod_expr(this);
}


std::any CalcParser::Multdivmod_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMultdivmod_expr(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::Multdivmod_exprContext* CalcParser::multdivmod_expr() {
  Multdivmod_exprContext *_localctx = _tracker.createInstance<Multdivmod_exprContext>(_ctx, getState());
  enterRule(_localctx, 42, CalcParser::RuleMultdivmod_expr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    unary_expr();
    setState(207);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 29360128) != 0)) {
      setState(203);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 29360128) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(204);
      unary_expr();
      setState(209);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unary_exprContext ------------------------------------------------------------------

CalcParser::Unary_exprContext::Unary_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::Unary_exprContext::getRuleIndex() const {
  return CalcParser::RuleUnary_expr;
}

void CalcParser::Unary_exprContext::copyFrom(Unary_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ValueExprContext ------------------------------------------------------------------

CalcParser::ValueContext* CalcParser::ValueExprContext::value() {
  return getRuleContext<CalcParser::ValueContext>(0);
}

CalcParser::ValueExprContext::ValueExprContext(Unary_exprContext *ctx) { copyFrom(ctx); }

void CalcParser::ValueExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueExpr(this);
}
void CalcParser::ValueExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueExpr(this);
}

std::any CalcParser::ValueExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitValueExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegativeExprContext ------------------------------------------------------------------

CalcParser::ValueContext* CalcParser::NegativeExprContext::value() {
  return getRuleContext<CalcParser::ValueContext>(0);
}

CalcParser::NegativeExprContext::NegativeExprContext(Unary_exprContext *ctx) { copyFrom(ctx); }

void CalcParser::NegativeExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegativeExpr(this);
}
void CalcParser::NegativeExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegativeExpr(this);
}

std::any CalcParser::NegativeExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitNegativeExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecrementContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::DecrementContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

CalcParser::DecrementContext::DecrementContext(Unary_exprContext *ctx) { copyFrom(ctx); }

void CalcParser::DecrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrement(this);
}
void CalcParser::DecrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrement(this);
}

std::any CalcParser::DecrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitDecrement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncrementContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IncrementContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

CalcParser::IncrementContext::IncrementContext(Unary_exprContext *ctx) { copyFrom(ctx); }

void CalcParser::IncrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrement(this);
}
void CalcParser::IncrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrement(this);
}

std::any CalcParser::IncrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitIncrement(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::Unary_exprContext* CalcParser::unary_expr() {
  Unary_exprContext *_localctx = _tracker.createInstance<Unary_exprContext>(_ctx, getState());
  enterRule(_localctx, 44, CalcParser::RuleUnary_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcParser::NegativeExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(210);
      match(CalcParser::T__20);
      setState(211);
      value();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcParser::IncrementContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(212);
      match(CalcParser::NAME);
      setState(213);
      match(CalcParser::T__24);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CalcParser::DecrementContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(214);
      match(CalcParser::NAME);
      setState(215);
      match(CalcParser::T__25);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CalcParser::ValueExprContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(216);
      value();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

CalcParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CalcParser::ExprContext* CalcParser::ValueContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::ValueContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

tree::TerminalNode* CalcParser::ValueContext::INTEGER() {
  return getToken(CalcParser::INTEGER, 0);
}

tree::TerminalNode* CalcParser::ValueContext::FLOAT() {
  return getToken(CalcParser::FLOAT, 0);
}

tree::TerminalNode* CalcParser::ValueContext::TRUE() {
  return getToken(CalcParser::TRUE, 0);
}

tree::TerminalNode* CalcParser::ValueContext::FALSE() {
  return getToken(CalcParser::FALSE, 0);
}

CalcParser::Func_callContext* CalcParser::ValueContext::func_call() {
  return getRuleContext<CalcParser::Func_callContext>(0);
}


size_t CalcParser::ValueContext::getRuleIndex() const {
  return CalcParser::RuleValue;
}

void CalcParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void CalcParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


std::any CalcParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ValueContext* CalcParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 46, CalcParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(229);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(219);
      match(CalcParser::T__6);
      setState(220);
      expr();
      setState(221);
      match(CalcParser::T__7);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(223);
      match(CalcParser::NAME);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(224);
      match(CalcParser::INTEGER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(225);
      match(CalcParser::FLOAT);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(226);
      match(CalcParser::TRUE);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(227);
      match(CalcParser::FALSE);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(228);
      func_call();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CalcParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calcParserInitialize();
#else
  ::antlr4::internal::call_once(calcParserOnceFlag, calcParserInitialize);
#endif
}
