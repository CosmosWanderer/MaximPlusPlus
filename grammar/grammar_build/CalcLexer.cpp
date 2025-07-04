
// Generated from Calc.g4 by ANTLR 4.13.1


#include "CalcLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CalcLexerStaticData final {
  CalcLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcLexerStaticData(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData(CalcLexerStaticData&&) = delete;
  CalcLexerStaticData& operator=(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData& operator=(CalcLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calclexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CalcLexerStaticData *calclexerLexerStaticData = nullptr;

void calclexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calclexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(calclexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "IF", "ELSE", "WHILE", "PRINT", "RETURN", "DEF", "LBRACK", 
      "RBRACK", "TRUE", "FALSE", "TYPE", "NAME", "INTEGER", "FLOAT", "WS", 
      "SEP", "ONELINECOMMENT", "MULLINECOMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
      "INTEGER", "FLOAT", "WS", "SEP", "ONELINECOMMENT", "MULLINECOMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,44,296,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,
  	4,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,
  	1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,16,1,16,
  	1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,
  	1,23,1,23,1,24,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,
  	1,27,1,27,1,28,1,28,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,32,1,32,1,33,
  	1,33,1,34,1,34,1,34,1,34,1,34,1,35,1,35,1,35,1,35,1,35,1,35,1,36,1,36,
  	1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,1,36,
  	3,36,218,8,36,1,37,1,37,5,37,222,8,37,10,37,12,37,225,9,37,1,38,1,38,
  	3,38,229,8,38,1,38,1,38,5,38,233,8,38,10,38,12,38,236,9,38,3,38,238,8,
  	38,1,39,3,39,241,8,39,1,39,4,39,244,8,39,11,39,12,39,245,1,39,1,39,5,
  	39,250,8,39,10,39,12,39,253,9,39,1,39,1,39,4,39,257,8,39,11,39,12,39,
  	258,3,39,261,8,39,1,40,4,40,264,8,40,11,40,12,40,265,1,40,1,40,1,41,1,
  	41,1,42,1,42,1,42,1,42,5,42,276,8,42,10,42,12,42,279,9,42,1,42,1,42,1,
  	43,1,43,1,43,1,43,5,43,287,8,43,10,43,12,43,290,9,43,1,43,1,43,1,43,1,
  	43,1,43,1,288,0,44,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,
  	23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,
  	23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,
  	69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,43,87,44,1,0,6,3,0,
  	65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,49,57,1,0,48,57,3,
  	0,9,10,13,13,32,32,2,0,10,10,13,13,309,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,
  	0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,
  	0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,
  	1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,
  	0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,
  	0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,
  	1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,
  	0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,
  	0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,1,89,1,0,0,0,3,91,
  	1,0,0,0,5,94,1,0,0,0,7,97,1,0,0,0,9,100,1,0,0,0,11,103,1,0,0,0,13,106,
  	1,0,0,0,15,108,1,0,0,0,17,110,1,0,0,0,19,112,1,0,0,0,21,114,1,0,0,0,23,
  	116,1,0,0,0,25,119,1,0,0,0,27,123,1,0,0,0,29,126,1,0,0,0,31,129,1,0,0,
  	0,33,131,1,0,0,0,35,133,1,0,0,0,37,136,1,0,0,0,39,139,1,0,0,0,41,141,
  	1,0,0,0,43,143,1,0,0,0,45,145,1,0,0,0,47,147,1,0,0,0,49,149,1,0,0,0,51,
  	152,1,0,0,0,53,155,1,0,0,0,55,158,1,0,0,0,57,163,1,0,0,0,59,169,1,0,0,
  	0,61,175,1,0,0,0,63,182,1,0,0,0,65,186,1,0,0,0,67,188,1,0,0,0,69,190,
  	1,0,0,0,71,195,1,0,0,0,73,217,1,0,0,0,75,219,1,0,0,0,77,237,1,0,0,0,79,
  	240,1,0,0,0,81,263,1,0,0,0,83,269,1,0,0,0,85,271,1,0,0,0,87,282,1,0,0,
  	0,89,90,5,61,0,0,90,2,1,0,0,0,91,92,5,43,0,0,92,93,5,61,0,0,93,4,1,0,
  	0,0,94,95,5,45,0,0,95,96,5,61,0,0,96,6,1,0,0,0,97,98,5,47,0,0,98,99,5,
  	61,0,0,99,8,1,0,0,0,100,101,5,42,0,0,101,102,5,61,0,0,102,10,1,0,0,0,
  	103,104,5,37,0,0,104,105,5,61,0,0,105,12,1,0,0,0,106,107,5,40,0,0,107,
  	14,1,0,0,0,108,109,5,41,0,0,109,16,1,0,0,0,110,111,5,44,0,0,111,18,1,
  	0,0,0,112,113,5,123,0,0,113,20,1,0,0,0,114,115,5,125,0,0,115,22,1,0,0,
  	0,116,117,5,111,0,0,117,118,5,114,0,0,118,24,1,0,0,0,119,120,5,97,0,0,
  	120,121,5,110,0,0,121,122,5,100,0,0,122,26,1,0,0,0,123,124,5,61,0,0,124,
  	125,5,61,0,0,125,28,1,0,0,0,126,127,5,33,0,0,127,128,5,61,0,0,128,30,
  	1,0,0,0,129,130,5,60,0,0,130,32,1,0,0,0,131,132,5,62,0,0,132,34,1,0,0,
  	0,133,134,5,60,0,0,134,135,5,61,0,0,135,36,1,0,0,0,136,137,5,62,0,0,137,
  	138,5,61,0,0,138,38,1,0,0,0,139,140,5,43,0,0,140,40,1,0,0,0,141,142,5,
  	45,0,0,142,42,1,0,0,0,143,144,5,42,0,0,144,44,1,0,0,0,145,146,5,47,0,
  	0,146,46,1,0,0,0,147,148,5,37,0,0,148,48,1,0,0,0,149,150,5,43,0,0,150,
  	151,5,43,0,0,151,50,1,0,0,0,152,153,5,45,0,0,153,154,5,45,0,0,154,52,
  	1,0,0,0,155,156,5,105,0,0,156,157,5,102,0,0,157,54,1,0,0,0,158,159,5,
  	101,0,0,159,160,5,108,0,0,160,161,5,115,0,0,161,162,5,101,0,0,162,56,
  	1,0,0,0,163,164,5,119,0,0,164,165,5,104,0,0,165,166,5,105,0,0,166,167,
  	5,108,0,0,167,168,5,101,0,0,168,58,1,0,0,0,169,170,5,112,0,0,170,171,
  	5,114,0,0,171,172,5,105,0,0,172,173,5,110,0,0,173,174,5,116,0,0,174,60,
  	1,0,0,0,175,176,5,114,0,0,176,177,5,101,0,0,177,178,5,116,0,0,178,179,
  	5,117,0,0,179,180,5,114,0,0,180,181,5,110,0,0,181,62,1,0,0,0,182,183,
  	5,100,0,0,183,184,5,101,0,0,184,185,5,102,0,0,185,64,1,0,0,0,186,187,
  	5,91,0,0,187,66,1,0,0,0,188,189,5,93,0,0,189,68,1,0,0,0,190,191,5,116,
  	0,0,191,192,5,114,0,0,192,193,5,117,0,0,193,194,5,101,0,0,194,70,1,0,
  	0,0,195,196,5,102,0,0,196,197,5,97,0,0,197,198,5,108,0,0,198,199,5,115,
  	0,0,199,200,5,101,0,0,200,72,1,0,0,0,201,202,5,105,0,0,202,203,5,110,
  	0,0,203,204,5,116,0,0,204,205,5,101,0,0,205,206,5,103,0,0,206,207,5,101,
  	0,0,207,218,5,114,0,0,208,209,5,102,0,0,209,210,5,108,0,0,210,211,5,111,
  	0,0,211,212,5,97,0,0,212,218,5,116,0,0,213,214,5,98,0,0,214,215,5,111,
  	0,0,215,216,5,111,0,0,216,218,5,108,0,0,217,201,1,0,0,0,217,208,1,0,0,
  	0,217,213,1,0,0,0,218,74,1,0,0,0,219,223,7,0,0,0,220,222,7,1,0,0,221,
  	220,1,0,0,0,222,225,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,224,76,1,
  	0,0,0,225,223,1,0,0,0,226,238,5,48,0,0,227,229,5,45,0,0,228,227,1,0,0,
  	0,228,229,1,0,0,0,229,230,1,0,0,0,230,234,7,2,0,0,231,233,7,3,0,0,232,
  	231,1,0,0,0,233,236,1,0,0,0,234,232,1,0,0,0,234,235,1,0,0,0,235,238,1,
  	0,0,0,236,234,1,0,0,0,237,226,1,0,0,0,237,228,1,0,0,0,238,78,1,0,0,0,
  	239,241,5,45,0,0,240,239,1,0,0,0,240,241,1,0,0,0,241,260,1,0,0,0,242,
  	244,7,3,0,0,243,242,1,0,0,0,244,245,1,0,0,0,245,243,1,0,0,0,245,246,1,
  	0,0,0,246,247,1,0,0,0,247,251,5,46,0,0,248,250,7,3,0,0,249,248,1,0,0,
  	0,250,253,1,0,0,0,251,249,1,0,0,0,251,252,1,0,0,0,252,261,1,0,0,0,253,
  	251,1,0,0,0,254,256,5,46,0,0,255,257,7,3,0,0,256,255,1,0,0,0,257,258,
  	1,0,0,0,258,256,1,0,0,0,258,259,1,0,0,0,259,261,1,0,0,0,260,243,1,0,0,
  	0,260,254,1,0,0,0,261,80,1,0,0,0,262,264,7,4,0,0,263,262,1,0,0,0,264,
  	265,1,0,0,0,265,263,1,0,0,0,265,266,1,0,0,0,266,267,1,0,0,0,267,268,6,
  	40,0,0,268,82,1,0,0,0,269,270,5,59,0,0,270,84,1,0,0,0,271,272,5,47,0,
  	0,272,273,5,47,0,0,273,277,1,0,0,0,274,276,8,5,0,0,275,274,1,0,0,0,276,
  	279,1,0,0,0,277,275,1,0,0,0,277,278,1,0,0,0,278,280,1,0,0,0,279,277,1,
  	0,0,0,280,281,6,42,0,0,281,86,1,0,0,0,282,283,5,47,0,0,283,284,5,42,0,
  	0,284,288,1,0,0,0,285,287,9,0,0,0,286,285,1,0,0,0,287,290,1,0,0,0,288,
  	289,1,0,0,0,288,286,1,0,0,0,289,291,1,0,0,0,290,288,1,0,0,0,291,292,5,
  	42,0,0,292,293,5,47,0,0,293,294,1,0,0,0,294,295,6,43,0,0,295,88,1,0,0,
  	0,14,0,217,223,228,234,237,240,245,251,258,260,265,277,288,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calclexerLexerStaticData = staticData.release();
}

}

CalcLexer::CalcLexer(CharStream *input) : Lexer(input) {
  CalcLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calclexerLexerStaticData->atn, calclexerLexerStaticData->decisionToDFA, calclexerLexerStaticData->sharedContextCache);
}

CalcLexer::~CalcLexer() {
  delete _interpreter;
}

std::string CalcLexer::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcLexer::getRuleNames() const {
  return calclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CalcLexer::getChannelNames() const {
  return calclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CalcLexer::getModeNames() const {
  return calclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CalcLexer::getVocabulary() const {
  return calclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalcLexer::getSerializedATN() const {
  return calclexerLexerStaticData->serializedATN;
}

const atn::ATN& CalcLexer::getATN() const {
  return *calclexerLexerStaticData->atn;
}




void CalcLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calclexerLexerInitialize();
#else
  ::antlr4::internal::call_once(calclexerLexerOnceFlag, calclexerLexerInitialize);
#endif
}
