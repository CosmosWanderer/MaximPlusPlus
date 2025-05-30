grammar Calc;

IF     : 'if' ;
ELSE   : 'else' ;
WHILE  : 'while' ;
PRINT  : 'print' ;
RETURN : 'return' ;
DEF : 'def' ;

LBRACK : '[' ;
RBRACK : ']' ;

TRUE   : 'true' ;
FALSE  : 'false' ;

TYPE: 'integer' | 'float' | 'bool';

NAME     : [a-zA-Z_][a-zA-Z_0-9]* ;
INTEGER: '0' | '-'?[1-9][0-9]*;
FLOAT: '-'? ([0-9]+ '.' [0-9]* | '.' [0-9]+);

WS     : [ \t\r\n]+ -> skip ;
SEP    : ';' ;



// Whole programm
prog : statement* EOF                                                     # Program
    ;

// Code statement
statement : var_assignment SEP 	                                          # VarAssignmentStat
          | typed_var_assignment SEP                                      # TypedVarAssignmentStat
          | var_comp_assignment SEP                                       # VarCompoundAssignmentStat
          | expr SEP	 	                                              # ExpressionStat
          | print_expression SEP                                          # PrintExprStat
          | return_expression SEP                                         # ReturnExprStat
          | funct_def                                                     # FunctionDefenitinStat
          | operator_if 		                                          # OperatorIfStat
          | operator_while 		                                          # OperatorWhileStat
          ;

// Variable assignments (no type/ typed)
var_assignment : NAME '=' expr	                                          # VarAssignmentExpression
    ;
typed_var_assignment : TYPE NAME '=' expr	                              # TypedVarAssignmentExpression
    ;

// Compound assignments (+=, -=, etc)
var_comp_assignment : NAME ('+=' | '-=' | '/=' | '*=' | '%=') expr;

// If/else, while
operator_if : IF '(' expr ')' code_block (ELSE code_block)?               # OperatorIf
    ;

operator_while : WHILE '(' expr ')' code_block                            # OperatorWhile
    ;

// Functions, defining and calling
funct_def: DEF NAME '(' param_list? ')' code_block                        # FunctionDefenition
    ;
func_call: NAME '(' args? ')'                                             # FunctionCall
    ;
param: TYPE NAME;
param_list: param (',' param)*;
args: expr (',' expr)*; 

// Print, return
print_expression: PRINT LBRACK expr RBRACK                                # PrintExpr
    ;
return_expression: RETURN expr?                                           # ReturnExpr
    ;

// Inner code blocks
code_block : '{' statement* '}'	                                          # CodeBlock
    ;

// Bad way to make priorities
expr : or_expr;                                                         
or_expr : and_expr ('or' and_expr)* ;
and_expr : equal_expr ('and' equal_expr)* ;
equal_expr : relational_expr (('==' | '!=') relational_expr)* ;
relational_expr : addsub_expr (('<' | '>' | '<=' | '>=') addsub_expr)* ;
addsub_expr : multdivmod_expr (('+' | '-') multdivmod_expr)* ;
multdivmod_expr : unary_expr (('*' | '/' | '%') unary_expr)* ;
unary_expr : '-' value                                                    # NegativeExpr  
          | NAME '++'                                                     # Increment
          | NAME '--'                                                     # Decrement
          | value                                                         # ValueExpr
          ;
value : '(' expr ')'
     | NAME
     | INTEGER
     | FLOAT
     | TRUE
     | FALSE
     | func_call
     ;