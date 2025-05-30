// Generated from d:/programs/c++/UnProg/ANTLRParser/mp2-lab6-Translator-master/mp2-lab6-Translator-master/grammar/grammar_source/Calc.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class CalcParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, IF=27, ELSE=28, WHILE=29, PRINT=30, RETURN=31, DEF=32, 
		LBRACK=33, RBRACK=34, TRUE=35, FALSE=36, TYPE=37, NAME=38, INTEGER=39, 
		FLOAT=40, WS=41, SEP=42;
	public static final int
		RULE_prog = 0, RULE_statement = 1, RULE_var_assignment = 2, RULE_typed_var_assignment = 3, 
		RULE_var_comp_assignment = 4, RULE_operator_if = 5, RULE_operator_while = 6, 
		RULE_funct_def = 7, RULE_func_call = 8, RULE_param = 9, RULE_param_list = 10, 
		RULE_args = 11, RULE_print_expression = 12, RULE_return_expression = 13, 
		RULE_code_block = 14, RULE_expr = 15, RULE_or_expr = 16, RULE_and_expr = 17, 
		RULE_equal_expr = 18, RULE_relational_expr = 19, RULE_addsub_expr = 20, 
		RULE_multdivmod_expr = 21, RULE_unary_expr = 22, RULE_value = 23;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "statement", "var_assignment", "typed_var_assignment", "var_comp_assignment", 
			"operator_if", "operator_while", "funct_def", "func_call", "param", "param_list", 
			"args", "print_expression", "return_expression", "code_block", "expr", 
			"or_expr", "and_expr", "equal_expr", "relational_expr", "addsub_expr", 
			"multdivmod_expr", "unary_expr", "value"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'='", "'+='", "'-='", "'/='", "'*='", "'%='", "'('", "')'", "','", 
			"'{'", "'}'", "'or'", "'and'", "'=='", "'!='", "'<'", "'>'", "'<='", 
			"'>='", "'+'", "'-'", "'*'", "'/'", "'%'", "'++'", "'--'", "'if'", "'else'", 
			"'while'", "'print'", "'return'", "'def'", "'['", "']'", "'true'", "'false'", 
			null, null, null, null, null, "';'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "IF", "ELSE", "WHILE", "PRINT", "RETURN", "DEF", "LBRACK", 
			"RBRACK", "TRUE", "FALSE", "TYPE", "NAME", "INTEGER", "FLOAT", "WS", 
			"SEP"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "Calc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public CalcParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgContext extends ParserRuleContext {
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	 
		public ProgContext() { }
		public void copyFrom(ProgContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ProgramContext extends ProgContext {
		public TerminalNode EOF() { return getToken(CalcParser.EOF, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public ProgramContext(ProgContext ctx) { copyFrom(ctx); }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			_localctx = new ProgramContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(51);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2172852895872L) != 0)) {
				{
				{
				setState(48);
				statement();
				}
				}
				setState(53);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(54);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class VarCompoundAssignmentStatContext extends StatementContext {
		public Var_comp_assignmentContext var_comp_assignment() {
			return getRuleContext(Var_comp_assignmentContext.class,0);
		}
		public TerminalNode SEP() { return getToken(CalcParser.SEP, 0); }
		public VarCompoundAssignmentStatContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class VarAssignmentStatContext extends StatementContext {
		public Var_assignmentContext var_assignment() {
			return getRuleContext(Var_assignmentContext.class,0);
		}
		public TerminalNode SEP() { return getToken(CalcParser.SEP, 0); }
		public VarAssignmentStatContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExpressionStatContext extends StatementContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode SEP() { return getToken(CalcParser.SEP, 0); }
		public ExpressionStatContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperatorIfStatContext extends StatementContext {
		public Operator_ifContext operator_if() {
			return getRuleContext(Operator_ifContext.class,0);
		}
		public OperatorIfStatContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class PrintExprStatContext extends StatementContext {
		public Print_expressionContext print_expression() {
			return getRuleContext(Print_expressionContext.class,0);
		}
		public TerminalNode SEP() { return getToken(CalcParser.SEP, 0); }
		public PrintExprStatContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TypedVarAssignmentStatContext extends StatementContext {
		public Typed_var_assignmentContext typed_var_assignment() {
			return getRuleContext(Typed_var_assignmentContext.class,0);
		}
		public TerminalNode SEP() { return getToken(CalcParser.SEP, 0); }
		public TypedVarAssignmentStatContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FunctionDefenitinStatContext extends StatementContext {
		public Funct_defContext funct_def() {
			return getRuleContext(Funct_defContext.class,0);
		}
		public FunctionDefenitinStatContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperatorWhileStatContext extends StatementContext {
		public Operator_whileContext operator_while() {
			return getRuleContext(Operator_whileContext.class,0);
		}
		public OperatorWhileStatContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ReturnExprStatContext extends StatementContext {
		public Return_expressionContext return_expression() {
			return getRuleContext(Return_expressionContext.class,0);
		}
		public TerminalNode SEP() { return getToken(CalcParser.SEP, 0); }
		public ReturnExprStatContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		try {
			setState(77);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,1,_ctx) ) {
			case 1:
				_localctx = new VarAssignmentStatContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(56);
				var_assignment();
				setState(57);
				match(SEP);
				}
				break;
			case 2:
				_localctx = new TypedVarAssignmentStatContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(59);
				typed_var_assignment();
				setState(60);
				match(SEP);
				}
				break;
			case 3:
				_localctx = new VarCompoundAssignmentStatContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(62);
				var_comp_assignment();
				setState(63);
				match(SEP);
				}
				break;
			case 4:
				_localctx = new ExpressionStatContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(65);
				expr();
				setState(66);
				match(SEP);
				}
				break;
			case 5:
				_localctx = new PrintExprStatContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(68);
				print_expression();
				setState(69);
				match(SEP);
				}
				break;
			case 6:
				_localctx = new ReturnExprStatContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(71);
				return_expression();
				setState(72);
				match(SEP);
				}
				break;
			case 7:
				_localctx = new FunctionDefenitinStatContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(74);
				funct_def();
				}
				break;
			case 8:
				_localctx = new OperatorIfStatContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(75);
				operator_if();
				}
				break;
			case 9:
				_localctx = new OperatorWhileStatContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(76);
				operator_while();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Var_assignmentContext extends ParserRuleContext {
		public Var_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_assignment; }
	 
		public Var_assignmentContext() { }
		public void copyFrom(Var_assignmentContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class VarAssignmentExpressionContext extends Var_assignmentContext {
		public TerminalNode NAME() { return getToken(CalcParser.NAME, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public VarAssignmentExpressionContext(Var_assignmentContext ctx) { copyFrom(ctx); }
	}

	public final Var_assignmentContext var_assignment() throws RecognitionException {
		Var_assignmentContext _localctx = new Var_assignmentContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_var_assignment);
		try {
			_localctx = new VarAssignmentExpressionContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(79);
			match(NAME);
			setState(80);
			match(T__0);
			setState(81);
			expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Typed_var_assignmentContext extends ParserRuleContext {
		public Typed_var_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_typed_var_assignment; }
	 
		public Typed_var_assignmentContext() { }
		public void copyFrom(Typed_var_assignmentContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TypedVarAssignmentExpressionContext extends Typed_var_assignmentContext {
		public TerminalNode TYPE() { return getToken(CalcParser.TYPE, 0); }
		public TerminalNode NAME() { return getToken(CalcParser.NAME, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TypedVarAssignmentExpressionContext(Typed_var_assignmentContext ctx) { copyFrom(ctx); }
	}

	public final Typed_var_assignmentContext typed_var_assignment() throws RecognitionException {
		Typed_var_assignmentContext _localctx = new Typed_var_assignmentContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_typed_var_assignment);
		try {
			_localctx = new TypedVarAssignmentExpressionContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(83);
			match(TYPE);
			setState(84);
			match(NAME);
			setState(85);
			match(T__0);
			setState(86);
			expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Var_comp_assignmentContext extends ParserRuleContext {
		public TerminalNode NAME() { return getToken(CalcParser.NAME, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Var_comp_assignmentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_var_comp_assignment; }
	}

	public final Var_comp_assignmentContext var_comp_assignment() throws RecognitionException {
		Var_comp_assignmentContext _localctx = new Var_comp_assignmentContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_var_comp_assignment);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			match(NAME);
			setState(89);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 124L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			setState(90);
			expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Operator_ifContext extends ParserRuleContext {
		public Operator_ifContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operator_if; }
	 
		public Operator_ifContext() { }
		public void copyFrom(Operator_ifContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperatorIfContext extends Operator_ifContext {
		public TerminalNode IF() { return getToken(CalcParser.IF, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public List<Code_blockContext> code_block() {
			return getRuleContexts(Code_blockContext.class);
		}
		public Code_blockContext code_block(int i) {
			return getRuleContext(Code_blockContext.class,i);
		}
		public TerminalNode ELSE() { return getToken(CalcParser.ELSE, 0); }
		public OperatorIfContext(Operator_ifContext ctx) { copyFrom(ctx); }
	}

	public final Operator_ifContext operator_if() throws RecognitionException {
		Operator_ifContext _localctx = new Operator_ifContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_operator_if);
		int _la;
		try {
			_localctx = new OperatorIfContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(92);
			match(IF);
			setState(93);
			match(T__6);
			setState(94);
			expr();
			setState(95);
			match(T__7);
			setState(96);
			code_block();
			setState(99);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==ELSE) {
				{
				setState(97);
				match(ELSE);
				setState(98);
				code_block();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Operator_whileContext extends ParserRuleContext {
		public Operator_whileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operator_while; }
	 
		public Operator_whileContext() { }
		public void copyFrom(Operator_whileContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperatorWhileContext extends Operator_whileContext {
		public TerminalNode WHILE() { return getToken(CalcParser.WHILE, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public OperatorWhileContext(Operator_whileContext ctx) { copyFrom(ctx); }
	}

	public final Operator_whileContext operator_while() throws RecognitionException {
		Operator_whileContext _localctx = new Operator_whileContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_operator_while);
		try {
			_localctx = new OperatorWhileContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(101);
			match(WHILE);
			setState(102);
			match(T__6);
			setState(103);
			expr();
			setState(104);
			match(T__7);
			setState(105);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Funct_defContext extends ParserRuleContext {
		public Funct_defContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_funct_def; }
	 
		public Funct_defContext() { }
		public void copyFrom(Funct_defContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FunctionDefenitionContext extends Funct_defContext {
		public TerminalNode DEF() { return getToken(CalcParser.DEF, 0); }
		public TerminalNode NAME() { return getToken(CalcParser.NAME, 0); }
		public Code_blockContext code_block() {
			return getRuleContext(Code_blockContext.class,0);
		}
		public Param_listContext param_list() {
			return getRuleContext(Param_listContext.class,0);
		}
		public FunctionDefenitionContext(Funct_defContext ctx) { copyFrom(ctx); }
	}

	public final Funct_defContext funct_def() throws RecognitionException {
		Funct_defContext _localctx = new Funct_defContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_funct_def);
		int _la;
		try {
			_localctx = new FunctionDefenitionContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(107);
			match(DEF);
			setState(108);
			match(NAME);
			setState(109);
			match(T__6);
			setState(111);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==TYPE) {
				{
				setState(110);
				param_list();
				}
			}

			setState(113);
			match(T__7);
			setState(114);
			code_block();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Func_callContext extends ParserRuleContext {
		public Func_callContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_func_call; }
	 
		public Func_callContext() { }
		public void copyFrom(Func_callContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FunctionCallContext extends Func_callContext {
		public TerminalNode NAME() { return getToken(CalcParser.NAME, 0); }
		public ArgsContext args() {
			return getRuleContext(ArgsContext.class,0);
		}
		public FunctionCallContext(Func_callContext ctx) { copyFrom(ctx); }
	}

	public final Func_callContext func_call() throws RecognitionException {
		Func_callContext _localctx = new Func_callContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_func_call);
		int _la;
		try {
			_localctx = new FunctionCallContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(116);
			match(NAME);
			setState(117);
			match(T__6);
			setState(119);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2027226660992L) != 0)) {
				{
				setState(118);
				args();
				}
			}

			setState(121);
			match(T__7);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParamContext extends ParserRuleContext {
		public TerminalNode TYPE() { return getToken(CalcParser.TYPE, 0); }
		public TerminalNode NAME() { return getToken(CalcParser.NAME, 0); }
		public ParamContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_param; }
	}

	public final ParamContext param() throws RecognitionException {
		ParamContext _localctx = new ParamContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_param);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			match(TYPE);
			setState(124);
			match(NAME);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Param_listContext extends ParserRuleContext {
		public List<ParamContext> param() {
			return getRuleContexts(ParamContext.class);
		}
		public ParamContext param(int i) {
			return getRuleContext(ParamContext.class,i);
		}
		public Param_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_param_list; }
	}

	public final Param_listContext param_list() throws RecognitionException {
		Param_listContext _localctx = new Param_listContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_param_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
			param();
			setState(131);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__8) {
				{
				{
				setState(127);
				match(T__8);
				setState(128);
				param();
				}
				}
				setState(133);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArgsContext extends ParserRuleContext {
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public ArgsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_args; }
	}

	public final ArgsContext args() throws RecognitionException {
		ArgsContext _localctx = new ArgsContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_args);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(134);
			expr();
			setState(139);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__8) {
				{
				{
				setState(135);
				match(T__8);
				setState(136);
				expr();
				}
				}
				setState(141);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Print_expressionContext extends ParserRuleContext {
		public Print_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_print_expression; }
	 
		public Print_expressionContext() { }
		public void copyFrom(Print_expressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class PrintExprContext extends Print_expressionContext {
		public TerminalNode PRINT() { return getToken(CalcParser.PRINT, 0); }
		public TerminalNode LBRACK() { return getToken(CalcParser.LBRACK, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode RBRACK() { return getToken(CalcParser.RBRACK, 0); }
		public PrintExprContext(Print_expressionContext ctx) { copyFrom(ctx); }
	}

	public final Print_expressionContext print_expression() throws RecognitionException {
		Print_expressionContext _localctx = new Print_expressionContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_print_expression);
		try {
			_localctx = new PrintExprContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(142);
			match(PRINT);
			setState(143);
			match(LBRACK);
			setState(144);
			expr();
			setState(145);
			match(RBRACK);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Return_expressionContext extends ParserRuleContext {
		public Return_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_return_expression; }
	 
		public Return_expressionContext() { }
		public void copyFrom(Return_expressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ReturnExprContext extends Return_expressionContext {
		public TerminalNode RETURN() { return getToken(CalcParser.RETURN, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public ReturnExprContext(Return_expressionContext ctx) { copyFrom(ctx); }
	}

	public final Return_expressionContext return_expression() throws RecognitionException {
		Return_expressionContext _localctx = new Return_expressionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_return_expression);
		int _la;
		try {
			_localctx = new ReturnExprContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(147);
			match(RETURN);
			setState(149);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2027226660992L) != 0)) {
				{
				setState(148);
				expr();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Code_blockContext extends ParserRuleContext {
		public Code_blockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_code_block; }
	 
		public Code_blockContext() { }
		public void copyFrom(Code_blockContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class CodeBlockContext extends Code_blockContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public CodeBlockContext(Code_blockContext ctx) { copyFrom(ctx); }
	}

	public final Code_blockContext code_block() throws RecognitionException {
		Code_blockContext _localctx = new Code_blockContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_code_block);
		int _la;
		try {
			_localctx = new CodeBlockContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(151);
			match(T__9);
			setState(155);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2172852895872L) != 0)) {
				{
				{
				setState(152);
				statement();
				}
				}
				setState(157);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(158);
			match(T__10);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public Or_exprContext or_expr() {
			return getRuleContext(Or_exprContext.class,0);
		}
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_expr);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(160);
			or_expr();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Or_exprContext extends ParserRuleContext {
		public List<And_exprContext> and_expr() {
			return getRuleContexts(And_exprContext.class);
		}
		public And_exprContext and_expr(int i) {
			return getRuleContext(And_exprContext.class,i);
		}
		public Or_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_or_expr; }
	}

	public final Or_exprContext or_expr() throws RecognitionException {
		Or_exprContext _localctx = new Or_exprContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_or_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			and_expr();
			setState(167);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__11) {
				{
				{
				setState(163);
				match(T__11);
				setState(164);
				and_expr();
				}
				}
				setState(169);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class And_exprContext extends ParserRuleContext {
		public List<Equal_exprContext> equal_expr() {
			return getRuleContexts(Equal_exprContext.class);
		}
		public Equal_exprContext equal_expr(int i) {
			return getRuleContext(Equal_exprContext.class,i);
		}
		public And_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_and_expr; }
	}

	public final And_exprContext and_expr() throws RecognitionException {
		And_exprContext _localctx = new And_exprContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_and_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(170);
			equal_expr();
			setState(175);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__12) {
				{
				{
				setState(171);
				match(T__12);
				setState(172);
				equal_expr();
				}
				}
				setState(177);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Equal_exprContext extends ParserRuleContext {
		public List<Relational_exprContext> relational_expr() {
			return getRuleContexts(Relational_exprContext.class);
		}
		public Relational_exprContext relational_expr(int i) {
			return getRuleContext(Relational_exprContext.class,i);
		}
		public Equal_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_equal_expr; }
	}

	public final Equal_exprContext equal_expr() throws RecognitionException {
		Equal_exprContext _localctx = new Equal_exprContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_equal_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			relational_expr();
			setState(183);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__13 || _la==T__14) {
				{
				{
				setState(179);
				_la = _input.LA(1);
				if ( !(_la==T__13 || _la==T__14) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(180);
				relational_expr();
				}
				}
				setState(185);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Relational_exprContext extends ParserRuleContext {
		public List<Addsub_exprContext> addsub_expr() {
			return getRuleContexts(Addsub_exprContext.class);
		}
		public Addsub_exprContext addsub_expr(int i) {
			return getRuleContext(Addsub_exprContext.class,i);
		}
		public Relational_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relational_expr; }
	}

	public final Relational_exprContext relational_expr() throws RecognitionException {
		Relational_exprContext _localctx = new Relational_exprContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_relational_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(186);
			addsub_expr();
			setState(191);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 983040L) != 0)) {
				{
				{
				setState(187);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 983040L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(188);
				addsub_expr();
				}
				}
				setState(193);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Addsub_exprContext extends ParserRuleContext {
		public List<Multdivmod_exprContext> multdivmod_expr() {
			return getRuleContexts(Multdivmod_exprContext.class);
		}
		public Multdivmod_exprContext multdivmod_expr(int i) {
			return getRuleContext(Multdivmod_exprContext.class,i);
		}
		public Addsub_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_addsub_expr; }
	}

	public final Addsub_exprContext addsub_expr() throws RecognitionException {
		Addsub_exprContext _localctx = new Addsub_exprContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_addsub_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(194);
			multdivmod_expr();
			setState(199);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__19 || _la==T__20) {
				{
				{
				setState(195);
				_la = _input.LA(1);
				if ( !(_la==T__19 || _la==T__20) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(196);
				multdivmod_expr();
				}
				}
				setState(201);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Multdivmod_exprContext extends ParserRuleContext {
		public List<Unary_exprContext> unary_expr() {
			return getRuleContexts(Unary_exprContext.class);
		}
		public Unary_exprContext unary_expr(int i) {
			return getRuleContext(Unary_exprContext.class,i);
		}
		public Multdivmod_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multdivmod_expr; }
	}

	public final Multdivmod_exprContext multdivmod_expr() throws RecognitionException {
		Multdivmod_exprContext _localctx = new Multdivmod_exprContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_multdivmod_expr);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(202);
			unary_expr();
			setState(207);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 29360128L) != 0)) {
				{
				{
				setState(203);
				_la = _input.LA(1);
				if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 29360128L) != 0)) ) {
				_errHandler.recoverInline(this);
				}
				else {
					if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
					_errHandler.reportMatch(this);
					consume();
				}
				setState(204);
				unary_expr();
				}
				}
				setState(209);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class Unary_exprContext extends ParserRuleContext {
		public Unary_exprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_unary_expr; }
	 
		public Unary_exprContext() { }
		public void copyFrom(Unary_exprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ValueExprContext extends Unary_exprContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public ValueExprContext(Unary_exprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class NegativeExprContext extends Unary_exprContext {
		public ValueContext value() {
			return getRuleContext(ValueContext.class,0);
		}
		public NegativeExprContext(Unary_exprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DecrementContext extends Unary_exprContext {
		public TerminalNode NAME() { return getToken(CalcParser.NAME, 0); }
		public DecrementContext(Unary_exprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class IncrementContext extends Unary_exprContext {
		public TerminalNode NAME() { return getToken(CalcParser.NAME, 0); }
		public IncrementContext(Unary_exprContext ctx) { copyFrom(ctx); }
	}

	public final Unary_exprContext unary_expr() throws RecognitionException {
		Unary_exprContext _localctx = new Unary_exprContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_unary_expr);
		try {
			setState(217);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				_localctx = new NegativeExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(210);
				match(T__20);
				setState(211);
				value();
				}
				break;
			case 2:
				_localctx = new IncrementContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(212);
				match(NAME);
				setState(213);
				match(T__24);
				}
				break;
			case 3:
				_localctx = new DecrementContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(214);
				match(NAME);
				setState(215);
				match(T__25);
				}
				break;
			case 4:
				_localctx = new ValueExprContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(216);
				value();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ValueContext extends ParserRuleContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public TerminalNode NAME() { return getToken(CalcParser.NAME, 0); }
		public TerminalNode INTEGER() { return getToken(CalcParser.INTEGER, 0); }
		public TerminalNode FLOAT() { return getToken(CalcParser.FLOAT, 0); }
		public TerminalNode TRUE() { return getToken(CalcParser.TRUE, 0); }
		public TerminalNode FALSE() { return getToken(CalcParser.FALSE, 0); }
		public Func_callContext func_call() {
			return getRuleContext(Func_callContext.class,0);
		}
		public ValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_value; }
	}

	public final ValueContext value() throws RecognitionException {
		ValueContext _localctx = new ValueContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_value);
		try {
			setState(229);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,16,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(219);
				match(T__6);
				setState(220);
				expr();
				setState(221);
				match(T__7);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(223);
				match(NAME);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(224);
				match(INTEGER);
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(225);
				match(FLOAT);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(226);
				match(TRUE);
				}
				break;
			case 6:
				enterOuterAlt(_localctx, 6);
				{
				setState(227);
				match(FALSE);
				}
				break;
			case 7:
				enterOuterAlt(_localctx, 7);
				{
				setState(228);
				func_call();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001*\u00e8\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0001\u0000\u0005\u0000"+
		"2\b\u0000\n\u0000\f\u00005\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0003\u0001N\b\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0003\u0005d\b\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0003\u0007p\b\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001"+
		"\b\u0001\b\u0003\bx\b\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001"+
		"\n\u0001\n\u0001\n\u0005\n\u0082\b\n\n\n\f\n\u0085\t\n\u0001\u000b\u0001"+
		"\u000b\u0001\u000b\u0005\u000b\u008a\b\u000b\n\u000b\f\u000b\u008d\t\u000b"+
		"\u0001\f\u0001\f\u0001\f\u0001\f\u0001\f\u0001\r\u0001\r\u0003\r\u0096"+
		"\b\r\u0001\u000e\u0001\u000e\u0005\u000e\u009a\b\u000e\n\u000e\f\u000e"+
		"\u009d\t\u000e\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u0010"+
		"\u0001\u0010\u0001\u0010\u0005\u0010\u00a6\b\u0010\n\u0010\f\u0010\u00a9"+
		"\t\u0010\u0001\u0011\u0001\u0011\u0001\u0011\u0005\u0011\u00ae\b\u0011"+
		"\n\u0011\f\u0011\u00b1\t\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0005"+
		"\u0012\u00b6\b\u0012\n\u0012\f\u0012\u00b9\t\u0012\u0001\u0013\u0001\u0013"+
		"\u0001\u0013\u0005\u0013\u00be\b\u0013\n\u0013\f\u0013\u00c1\t\u0013\u0001"+
		"\u0014\u0001\u0014\u0001\u0014\u0005\u0014\u00c6\b\u0014\n\u0014\f\u0014"+
		"\u00c9\t\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0005\u0015\u00ce\b"+
		"\u0015\n\u0015\f\u0015\u00d1\t\u0015\u0001\u0016\u0001\u0016\u0001\u0016"+
		"\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0003\u0016\u00da\b\u0016"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017"+
		"\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0003\u0017\u00e6\b\u0017"+
		"\u0001\u0017\u0000\u0000\u0018\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010"+
		"\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,.\u0000\u0005\u0001"+
		"\u0000\u0002\u0006\u0001\u0000\u000e\u000f\u0001\u0000\u0010\u0013\u0001"+
		"\u0000\u0014\u0015\u0001\u0000\u0016\u0018\u00ee\u00003\u0001\u0000\u0000"+
		"\u0000\u0002M\u0001\u0000\u0000\u0000\u0004O\u0001\u0000\u0000\u0000\u0006"+
		"S\u0001\u0000\u0000\u0000\bX\u0001\u0000\u0000\u0000\n\\\u0001\u0000\u0000"+
		"\u0000\fe\u0001\u0000\u0000\u0000\u000ek\u0001\u0000\u0000\u0000\u0010"+
		"t\u0001\u0000\u0000\u0000\u0012{\u0001\u0000\u0000\u0000\u0014~\u0001"+
		"\u0000\u0000\u0000\u0016\u0086\u0001\u0000\u0000\u0000\u0018\u008e\u0001"+
		"\u0000\u0000\u0000\u001a\u0093\u0001\u0000\u0000\u0000\u001c\u0097\u0001"+
		"\u0000\u0000\u0000\u001e\u00a0\u0001\u0000\u0000\u0000 \u00a2\u0001\u0000"+
		"\u0000\u0000\"\u00aa\u0001\u0000\u0000\u0000$\u00b2\u0001\u0000\u0000"+
		"\u0000&\u00ba\u0001\u0000\u0000\u0000(\u00c2\u0001\u0000\u0000\u0000*"+
		"\u00ca\u0001\u0000\u0000\u0000,\u00d9\u0001\u0000\u0000\u0000.\u00e5\u0001"+
		"\u0000\u0000\u000002\u0003\u0002\u0001\u000010\u0001\u0000\u0000\u0000"+
		"25\u0001\u0000\u0000\u000031\u0001\u0000\u0000\u000034\u0001\u0000\u0000"+
		"\u000046\u0001\u0000\u0000\u000053\u0001\u0000\u0000\u000067\u0005\u0000"+
		"\u0000\u00017\u0001\u0001\u0000\u0000\u000089\u0003\u0004\u0002\u0000"+
		"9:\u0005*\u0000\u0000:N\u0001\u0000\u0000\u0000;<\u0003\u0006\u0003\u0000"+
		"<=\u0005*\u0000\u0000=N\u0001\u0000\u0000\u0000>?\u0003\b\u0004\u0000"+
		"?@\u0005*\u0000\u0000@N\u0001\u0000\u0000\u0000AB\u0003\u001e\u000f\u0000"+
		"BC\u0005*\u0000\u0000CN\u0001\u0000\u0000\u0000DE\u0003\u0018\f\u0000"+
		"EF\u0005*\u0000\u0000FN\u0001\u0000\u0000\u0000GH\u0003\u001a\r\u0000"+
		"HI\u0005*\u0000\u0000IN\u0001\u0000\u0000\u0000JN\u0003\u000e\u0007\u0000"+
		"KN\u0003\n\u0005\u0000LN\u0003\f\u0006\u0000M8\u0001\u0000\u0000\u0000"+
		"M;\u0001\u0000\u0000\u0000M>\u0001\u0000\u0000\u0000MA\u0001\u0000\u0000"+
		"\u0000MD\u0001\u0000\u0000\u0000MG\u0001\u0000\u0000\u0000MJ\u0001\u0000"+
		"\u0000\u0000MK\u0001\u0000\u0000\u0000ML\u0001\u0000\u0000\u0000N\u0003"+
		"\u0001\u0000\u0000\u0000OP\u0005&\u0000\u0000PQ\u0005\u0001\u0000\u0000"+
		"QR\u0003\u001e\u000f\u0000R\u0005\u0001\u0000\u0000\u0000ST\u0005%\u0000"+
		"\u0000TU\u0005&\u0000\u0000UV\u0005\u0001\u0000\u0000VW\u0003\u001e\u000f"+
		"\u0000W\u0007\u0001\u0000\u0000\u0000XY\u0005&\u0000\u0000YZ\u0007\u0000"+
		"\u0000\u0000Z[\u0003\u001e\u000f\u0000[\t\u0001\u0000\u0000\u0000\\]\u0005"+
		"\u001b\u0000\u0000]^\u0005\u0007\u0000\u0000^_\u0003\u001e\u000f\u0000"+
		"_`\u0005\b\u0000\u0000`c\u0003\u001c\u000e\u0000ab\u0005\u001c\u0000\u0000"+
		"bd\u0003\u001c\u000e\u0000ca\u0001\u0000\u0000\u0000cd\u0001\u0000\u0000"+
		"\u0000d\u000b\u0001\u0000\u0000\u0000ef\u0005\u001d\u0000\u0000fg\u0005"+
		"\u0007\u0000\u0000gh\u0003\u001e\u000f\u0000hi\u0005\b\u0000\u0000ij\u0003"+
		"\u001c\u000e\u0000j\r\u0001\u0000\u0000\u0000kl\u0005 \u0000\u0000lm\u0005"+
		"&\u0000\u0000mo\u0005\u0007\u0000\u0000np\u0003\u0014\n\u0000on\u0001"+
		"\u0000\u0000\u0000op\u0001\u0000\u0000\u0000pq\u0001\u0000\u0000\u0000"+
		"qr\u0005\b\u0000\u0000rs\u0003\u001c\u000e\u0000s\u000f\u0001\u0000\u0000"+
		"\u0000tu\u0005&\u0000\u0000uw\u0005\u0007\u0000\u0000vx\u0003\u0016\u000b"+
		"\u0000wv\u0001\u0000\u0000\u0000wx\u0001\u0000\u0000\u0000xy\u0001\u0000"+
		"\u0000\u0000yz\u0005\b\u0000\u0000z\u0011\u0001\u0000\u0000\u0000{|\u0005"+
		"%\u0000\u0000|}\u0005&\u0000\u0000}\u0013\u0001\u0000\u0000\u0000~\u0083"+
		"\u0003\u0012\t\u0000\u007f\u0080\u0005\t\u0000\u0000\u0080\u0082\u0003"+
		"\u0012\t\u0000\u0081\u007f\u0001\u0000\u0000\u0000\u0082\u0085\u0001\u0000"+
		"\u0000\u0000\u0083\u0081\u0001\u0000\u0000\u0000\u0083\u0084\u0001\u0000"+
		"\u0000\u0000\u0084\u0015\u0001\u0000\u0000\u0000\u0085\u0083\u0001\u0000"+
		"\u0000\u0000\u0086\u008b\u0003\u001e\u000f\u0000\u0087\u0088\u0005\t\u0000"+
		"\u0000\u0088\u008a\u0003\u001e\u000f\u0000\u0089\u0087\u0001\u0000\u0000"+
		"\u0000\u008a\u008d\u0001\u0000\u0000\u0000\u008b\u0089\u0001\u0000\u0000"+
		"\u0000\u008b\u008c\u0001\u0000\u0000\u0000\u008c\u0017\u0001\u0000\u0000"+
		"\u0000\u008d\u008b\u0001\u0000\u0000\u0000\u008e\u008f\u0005\u001e\u0000"+
		"\u0000\u008f\u0090\u0005!\u0000\u0000\u0090\u0091\u0003\u001e\u000f\u0000"+
		"\u0091\u0092\u0005\"\u0000\u0000\u0092\u0019\u0001\u0000\u0000\u0000\u0093"+
		"\u0095\u0005\u001f\u0000\u0000\u0094\u0096\u0003\u001e\u000f\u0000\u0095"+
		"\u0094\u0001\u0000\u0000\u0000\u0095\u0096\u0001\u0000\u0000\u0000\u0096"+
		"\u001b\u0001\u0000\u0000\u0000\u0097\u009b\u0005\n\u0000\u0000\u0098\u009a"+
		"\u0003\u0002\u0001\u0000\u0099\u0098\u0001\u0000\u0000\u0000\u009a\u009d"+
		"\u0001\u0000\u0000\u0000\u009b\u0099\u0001\u0000\u0000\u0000\u009b\u009c"+
		"\u0001\u0000\u0000\u0000\u009c\u009e\u0001\u0000\u0000\u0000\u009d\u009b"+
		"\u0001\u0000\u0000\u0000\u009e\u009f\u0005\u000b\u0000\u0000\u009f\u001d"+
		"\u0001\u0000\u0000\u0000\u00a0\u00a1\u0003 \u0010\u0000\u00a1\u001f\u0001"+
		"\u0000\u0000\u0000\u00a2\u00a7\u0003\"\u0011\u0000\u00a3\u00a4\u0005\f"+
		"\u0000\u0000\u00a4\u00a6\u0003\"\u0011\u0000\u00a5\u00a3\u0001\u0000\u0000"+
		"\u0000\u00a6\u00a9\u0001\u0000\u0000\u0000\u00a7\u00a5\u0001\u0000\u0000"+
		"\u0000\u00a7\u00a8\u0001\u0000\u0000\u0000\u00a8!\u0001\u0000\u0000\u0000"+
		"\u00a9\u00a7\u0001\u0000\u0000\u0000\u00aa\u00af\u0003$\u0012\u0000\u00ab"+
		"\u00ac\u0005\r\u0000\u0000\u00ac\u00ae\u0003$\u0012\u0000\u00ad\u00ab"+
		"\u0001\u0000\u0000\u0000\u00ae\u00b1\u0001\u0000\u0000\u0000\u00af\u00ad"+
		"\u0001\u0000\u0000\u0000\u00af\u00b0\u0001\u0000\u0000\u0000\u00b0#\u0001"+
		"\u0000\u0000\u0000\u00b1\u00af\u0001\u0000\u0000\u0000\u00b2\u00b7\u0003"+
		"&\u0013\u0000\u00b3\u00b4\u0007\u0001\u0000\u0000\u00b4\u00b6\u0003&\u0013"+
		"\u0000\u00b5\u00b3\u0001\u0000\u0000\u0000\u00b6\u00b9\u0001\u0000\u0000"+
		"\u0000\u00b7\u00b5\u0001\u0000\u0000\u0000\u00b7\u00b8\u0001\u0000\u0000"+
		"\u0000\u00b8%\u0001\u0000\u0000\u0000\u00b9\u00b7\u0001\u0000\u0000\u0000"+
		"\u00ba\u00bf\u0003(\u0014\u0000\u00bb\u00bc\u0007\u0002\u0000\u0000\u00bc"+
		"\u00be\u0003(\u0014\u0000\u00bd\u00bb\u0001\u0000\u0000\u0000\u00be\u00c1"+
		"\u0001\u0000\u0000\u0000\u00bf\u00bd\u0001\u0000\u0000\u0000\u00bf\u00c0"+
		"\u0001\u0000\u0000\u0000\u00c0\'\u0001\u0000\u0000\u0000\u00c1\u00bf\u0001"+
		"\u0000\u0000\u0000\u00c2\u00c7\u0003*\u0015\u0000\u00c3\u00c4\u0007\u0003"+
		"\u0000\u0000\u00c4\u00c6\u0003*\u0015\u0000\u00c5\u00c3\u0001\u0000\u0000"+
		"\u0000\u00c6\u00c9\u0001\u0000\u0000\u0000\u00c7\u00c5\u0001\u0000\u0000"+
		"\u0000\u00c7\u00c8\u0001\u0000\u0000\u0000\u00c8)\u0001\u0000\u0000\u0000"+
		"\u00c9\u00c7\u0001\u0000\u0000\u0000\u00ca\u00cf\u0003,\u0016\u0000\u00cb"+
		"\u00cc\u0007\u0004\u0000\u0000\u00cc\u00ce\u0003,\u0016\u0000\u00cd\u00cb"+
		"\u0001\u0000\u0000\u0000\u00ce\u00d1\u0001\u0000\u0000\u0000\u00cf\u00cd"+
		"\u0001\u0000\u0000\u0000\u00cf\u00d0\u0001\u0000\u0000\u0000\u00d0+\u0001"+
		"\u0000\u0000\u0000\u00d1\u00cf\u0001\u0000\u0000\u0000\u00d2\u00d3\u0005"+
		"\u0015\u0000\u0000\u00d3\u00da\u0003.\u0017\u0000\u00d4\u00d5\u0005&\u0000"+
		"\u0000\u00d5\u00da\u0005\u0019\u0000\u0000\u00d6\u00d7\u0005&\u0000\u0000"+
		"\u00d7\u00da\u0005\u001a\u0000\u0000\u00d8\u00da\u0003.\u0017\u0000\u00d9"+
		"\u00d2\u0001\u0000\u0000\u0000\u00d9\u00d4\u0001\u0000\u0000\u0000\u00d9"+
		"\u00d6\u0001\u0000\u0000\u0000\u00d9\u00d8\u0001\u0000\u0000\u0000\u00da"+
		"-\u0001\u0000\u0000\u0000\u00db\u00dc\u0005\u0007\u0000\u0000\u00dc\u00dd"+
		"\u0003\u001e\u000f\u0000\u00dd\u00de\u0005\b\u0000\u0000\u00de\u00e6\u0001"+
		"\u0000\u0000\u0000\u00df\u00e6\u0005&\u0000\u0000\u00e0\u00e6\u0005\'"+
		"\u0000\u0000\u00e1\u00e6\u0005(\u0000\u0000\u00e2\u00e6\u0005#\u0000\u0000"+
		"\u00e3\u00e6\u0005$\u0000\u0000\u00e4\u00e6\u0003\u0010\b\u0000\u00e5"+
		"\u00db\u0001\u0000\u0000\u0000\u00e5\u00df\u0001\u0000\u0000\u0000\u00e5"+
		"\u00e0\u0001\u0000\u0000\u0000\u00e5\u00e1\u0001\u0000\u0000\u0000\u00e5"+
		"\u00e2\u0001\u0000\u0000\u0000\u00e5\u00e3\u0001\u0000\u0000\u0000\u00e5"+
		"\u00e4\u0001\u0000\u0000\u0000\u00e6/\u0001\u0000\u0000\u0000\u00113M"+
		"cow\u0083\u008b\u0095\u009b\u00a7\u00af\u00b7\u00bf\u00c7\u00cf\u00d9"+
		"\u00e5";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}