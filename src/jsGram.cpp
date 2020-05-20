
/*  A Bison parser, made from src/jsGram.ycc
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define yyparse jscrparse
#define yylex jscrlex
#define yyerror jscrerror
#define yylval jscrlval
#define yychar jscrchar
#define yydebug jscrdebug
#define yynerrs jscrnerrs
#define	IDENTIFIER_KW	257
#define	LITERAL_BOOLEAN	258
#define	LITERAL_FLOAT	259
#define	LITERAL_INT	260
#define	LITERAL_LONG	261
#define	LITERAL_STRING	262
#define	LITERAL_NULL	263
#define	ABSTRACT_KW	264
#define	BOOLEAN_KW	265
#define	BREAK_KW	266
#define	BYTE_KW	267
#define	CASE_KW	268
#define	CATCH_KW	269
#define	CHAR_KW	270
#define	CLASS_KW	271
#define	CONST_KW	272
#define	CONTINUE_KW	273
#define	DEFAULT_KW	274
#define	DELETE_KW	275
#define	DO_KW	276
#define	DOUBLE_KW	277
#define	ELSE_KW	278
#define	EXTENDS_KW	279
#define	FINAL_KW	280
#define	FINALLY_KW	281
#define	FLOAT_KW	282
#define	FOR_KW	283
#define	FUNCTION_KW	284
#define	GOTO_KW	285
#define	IF_KW	286
#define	IMPLEMENTS_KW	287
#define	IMPORT_KW	288
#define	IN_KW	289
#define	INSTANCEOF_KW	290
#define	INT_KW	291
#define	INTERFACE_KW	292
#define	LONG_KW	293
#define	NATIVE_KW	294
#define	NEW_KW	295
#define	PACKAGE_KW	296
#define	PRIVATE_KW	297
#define	PROTECTED_KW	298
#define	PUBLIC_KW	299
#define	RETURN_KW	300
#define	SHORT_KW	301
#define	STATIC_KW	302
#define	SUPER_KW	303
#define	SWITCH_KW	304
#define	SYNCHRONIZED_KW	305
#define	THIS_KW	306
#define	THROW_KW	307
#define	THROWS_KW	308
#define	TRANSIENT_KW	309
#define	TRY_KW	310
#define	TYPEOF_KW	311
#define	VAR_KW	312
#define	VOID_KW	313
#define	VOLATILE_KW	314
#define	WHILE_KW	315
#define	WITH_KW	316
#define	LS_KW	317
#define	URS_KW	318
#define	RS_KW	319
#define	ICR_KW	320
#define	DECR_KW	321
#define	ANDAND_KW	322
#define	OROR_KW	323
#define	PLUSASSIGN_KW	324
#define	MINUSASSIGN_KW	325
#define	TIMEASSIGN_KW	326
#define	DIVIDEASSIGN_KW	327
#define	ANDASSIGN_KW	328
#define	ORASSIGN_KW	329
#define	NOTASSIGN_KW	330
#define	MODASSIGN_KW	331
#define	LSASSIGN_KW	332
#define	RSASSIGN_KW	333
#define	URSASSIGN_KW	334
#define	EQ_KW	335
#define	NE_KW	336
#define	GE_KW	337
#define	LE_KW	338

#line 8 "src/jsGram.ycc"

/* On met ici les declaration et les fichiers inclus */

#include <stdio.h>
#undef yylex
#include "jscFlexer.h"
#define yylex jscrlex
#include "specialTypes.h"
#include "interpreter.h"
#include "statements.h"
#include "expressions.h"
#include "fctDefinition.h"
#include "varDecl.h"
#include "identifier.h"
#include "lists.h"

#define YYDEBUG	1

extern void jscrerror(char *);
extern int jscrlex(void);

extern JsInterpreter *interpreter;


#line 122 "src/jsGram.ycc"
typedef union
{
    bool boolValue;
    wchar *string;
    int	 integerNumber;
    unsigned int flag;
    float floatNumber;
    int longNumber[2];
    double doubleNumber;
    JsSyntaxElement *syntaxElement;
    JsStatement *statement;
    JsExpression *expression;
    JsVarDeclaration *varDecl;
    JsIdentifier *identifier;
    JsStatementList *statList;
    JsExprList *exprList;
    JsVarDeclList *varDeclList;
    JsIdentList *identList;
    JsFunctionDef *fctDef;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		252
#define	YYFLAG		-32768
#define	YYNTBASE	109

#define YYTRANSLATE(x) ((unsigned)(x) <= 338 ? yytranslate[x] : 167)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   108,     2,     2,     2,   101,    89,     2,    83,
    84,    99,    97,    85,    98,   102,   100,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,   105,    81,    93,
    82,    92,    86,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   106,     2,   107,    88,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   103,    87,   104,    96,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    90,    91,    94,    95
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     3,     5,     8,    10,    12,    14,    16,    18,
    20,    22,    24,    26,    28,    30,    32,    34,    36,    40,
    41,    43,    45,    48,    51,    54,    56,    60,    63,    64,
    67,    69,    72,    78,    86,    88,    90,    92,    94,   100,
   110,   111,   113,   115,   117,   125,   127,   131,   139,   142,
   145,   149,   155,   161,   165,   170,   177,   178,   180,   182,
   186,   187,   189,   191,   193,   195,   199,   201,   206,   210,
   214,   216,   219,   222,   225,   230,   234,   237,   241,   243,
   247,   249,   251,   253,   256,   259,   261,   264,   267,   270,
   273,   276,   279,   282,   285,   288,   290,   294,   298,   302,
   304,   308,   312,   314,   318,   322,   326,   328,   332,   336,
   340,   344,   346,   350,   354,   356,   360,   362,   366,   368,
   372,   374,   378,   380,   384,   386,   392,   394,   398,   400,
   402,   404,   406,   408,   410,   412,   414,   416,   418,   420,
   422,   424,   428,   430,   432,   434,   436,   438
};

static const short yyrhs[] = {    -1,
   110,     0,   111,     0,   110,   111,     0,   112,     0,   138,
     0,   113,     0,   116,     0,   121,     0,   122,     0,   123,
     0,   124,     0,   132,     0,   133,     0,   134,     0,   135,
     0,   136,     0,   137,     0,   103,   114,   104,     0,     0,
   115,     0,   112,     0,   115,   112,     0,   117,    81,     0,
    58,   118,     0,   119,     0,   118,    85,   119,     0,   166,
   120,     0,     0,    82,   162,     0,    81,     0,   164,    81,
     0,    32,    83,   164,    84,   112,     0,    32,    83,   164,
    84,   112,    24,   112,     0,   125,     0,   126,     0,   129,
     0,   131,     0,    61,    83,   164,    84,   112,     0,    29,
    83,   127,    81,   141,    81,   141,    84,   112,     0,     0,
   128,     0,   164,     0,   117,     0,    29,    83,   130,    35,
   164,    84,   112,     0,   148,     0,    58,   166,   120,     0,
    22,   112,    61,    83,   164,    84,    81,     0,    19,    81,
     0,    12,    81,     0,    46,   141,    81,     0,    62,    83,
   164,    84,   112,     0,    50,    83,   164,    84,   113,     0,
   166,   105,   112,     0,    14,   165,   105,   112,     0,    30,
   166,    83,   139,    84,   113,     0,     0,   140,     0,   166,
     0,   140,    85,   166,     0,     0,   164,     0,   165,     0,
   166,     0,    52,     0,    83,   164,    84,     0,   142,     0,
   143,   106,   164,   107,     0,   143,   102,   166,     0,    41,
   143,   146,     0,   143,     0,    41,   144,     0,   143,   146,
     0,   145,   146,     0,   145,   106,   164,   107,     0,   145,
   102,   166,     0,    83,    84,     0,    83,   147,    84,     0,
   162,     0,   147,    85,   162,     0,   144,     0,   145,     0,
   148,     0,   148,    66,     0,   148,    67,     0,   149,     0,
    21,   150,     0,    59,   150,     0,    57,   150,     0,    66,
   150,     0,    67,   150,     0,    97,   150,     0,    98,   150,
     0,    96,   150,     0,   108,   150,     0,   150,     0,   151,
    99,   150,     0,   151,   100,   150,     0,   151,   101,   150,
     0,   151,     0,   152,    97,   151,     0,   152,    98,   151,
     0,   152,     0,   153,    63,   152,     0,   153,    65,   152,
     0,   153,    64,   152,     0,   153,     0,   154,    93,   153,
     0,   154,    92,   153,     0,   154,    94,   153,     0,   154,
    95,   153,     0,   154,     0,   155,    90,   154,     0,   155,
    91,   154,     0,   155,     0,   156,    89,   155,     0,   156,
     0,   157,    88,   156,     0,   157,     0,   158,    87,   157,
     0,   158,     0,   159,    68,   158,     0,   159,     0,   160,
    69,   159,     0,   160,     0,   160,    86,   162,   105,   162,
     0,   161,     0,   148,   163,   162,     0,    82,     0,    72,
     0,    73,     0,    77,     0,    70,     0,    71,     0,    78,
     0,    79,     0,    80,     0,    74,     0,    75,     0,    76,
     0,   162,     0,   164,    85,   162,     0,     4,     0,     5,
     0,     6,     0,     8,     0,     9,     0,     3,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   219,   221,   223,   225,   228,   233,   241,   243,   244,   245,
   246,   247,   248,   249,   250,   251,   252,   253,   256,   262,
   266,   269,   274,   280,   287,   294,   299,   305,   312,   317,
   323,   330,   337,   342,   348,   350,   351,   352,   355,   362,
   377,   382,   385,   390,   396,   407,   412,   418,   426,   433,
   441,   448,   455,   463,   469,   476,   483,   488,   491,   496,
   504,   509,   512,   514,   518,   522,   528,   530,   534,   538,
   544,   546,   552,   557,   561,   565,   571,   576,   582,   587,
   593,   595,   598,   600,   604,   610,   612,   616,   620,   624,
   628,   632,   636,   640,   644,   650,   652,   656,   660,   666,
   668,   672,   678,   680,   684,   688,   694,   696,   700,   704,
   708,   714,   716,   720,   726,   728,   734,   736,   742,   744,
   750,   752,   758,   760,   766,   768,   774,   776,   782,   787,
   791,   795,   799,   803,   807,   811,   815,   819,   823,   827,
   833,   835,   842,   847,   851,   855,   859,   865
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","IDENTIFIER_KW",
"LITERAL_BOOLEAN","LITERAL_FLOAT","LITERAL_INT","LITERAL_LONG","LITERAL_STRING",
"LITERAL_NULL","ABSTRACT_KW","BOOLEAN_KW","BREAK_KW","BYTE_KW","CASE_KW","CATCH_KW",
"CHAR_KW","CLASS_KW","CONST_KW","CONTINUE_KW","DEFAULT_KW","DELETE_KW","DO_KW",
"DOUBLE_KW","ELSE_KW","EXTENDS_KW","FINAL_KW","FINALLY_KW","FLOAT_KW","FOR_KW",
"FUNCTION_KW","GOTO_KW","IF_KW","IMPLEMENTS_KW","IMPORT_KW","IN_KW","INSTANCEOF_KW",
"INT_KW","INTERFACE_KW","LONG_KW","NATIVE_KW","NEW_KW","PACKAGE_KW","PRIVATE_KW",
"PROTECTED_KW","PUBLIC_KW","RETURN_KW","SHORT_KW","STATIC_KW","SUPER_KW","SWITCH_KW",
"SYNCHRONIZED_KW","THIS_KW","THROW_KW","THROWS_KW","TRANSIENT_KW","TRY_KW","TYPEOF_KW",
"VAR_KW","VOID_KW","VOLATILE_KW","WHILE_KW","WITH_KW","LS_KW","URS_KW","RS_KW",
"ICR_KW","DECR_KW","ANDAND_KW","OROR_KW","PLUSASSIGN_KW","MINUSASSIGN_KW","TIMEASSIGN_KW",
"DIVIDEASSIGN_KW","ANDASSIGN_KW","ORASSIGN_KW","NOTASSIGN_KW","MODASSIGN_KW",
"LSASSIGN_KW","RSASSIGN_KW","URSASSIGN_KW","';'","'='","'('","')'","','","'?'",
"'|'","'^'","'&'","EQ_KW","NE_KW","'>'","'<'","GE_KW","LE_KW","'~'","'+'","'-'",
"'*'","'/'","'%'","'.'","'{'","'}'","':'","'['","']'","'!'","Program","ElementList",
"Element","Statement","BlockStat","StatementList.Opt","StatementList","VariableStat",
"VariableIntroductions","VariableDeclarationList","VariableDeclaration","Initializer.Opt",
"EmptyStat","ExpressionStat","IfThenStat","IterationStat","WhileStat","ForStat",
"ForInit.Opt","ForInit","ForInStat","ForInInit","DoStat","ContinueStat","BreakStat",
"ReturnStat","WithStat","SwitchStat","LabeledStat","FunctionDefinition","ParameterList.Opt",
"ParameterList","Expression.Opt","PrimaryExpr","MemberExpr","NewExpr","CallExpr",
"Arguments","ArgumentList","LeftHandSideExpr","PostfixExpr","UnaryExpr","MultiplicativeExpr",
"AdditiveExpr","ShiftExpr","RelationalExpr","EqualityExpr","BitAndExpr","BitXorExpr",
"BitIorExpr","LogicalAndExpr","LogicalOrExpression","ConditionalExpr","AssignmentExpr",
"AssignmentOperator","Expression","Literal","Identifier", NULL
};
#endif

static const short yyr1[] = {     0,
   109,   109,   110,   110,   111,   111,   112,   112,   112,   112,
   112,   112,   112,   112,   112,   112,   112,   112,   113,   114,
   114,   115,   115,   116,   117,   118,   118,   119,   120,   120,
   121,   122,   123,   123,   124,   124,   124,   124,   125,   126,
   127,   127,   128,   128,   129,   130,   130,   131,   132,   133,
   134,   135,   136,   137,   137,   138,   139,   139,   140,   140,
   141,   141,   142,   142,   142,   142,   143,   143,   143,   143,
   144,   144,   145,   145,   145,   145,   146,   146,   147,   147,
   148,   148,   149,   149,   149,   150,   150,   150,   150,   150,
   150,   150,   150,   150,   150,   151,   151,   151,   151,   152,
   152,   152,   153,   153,   153,   153,   154,   154,   154,   154,
   154,   155,   155,   155,   156,   156,   157,   157,   158,   158,
   159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
   163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
   164,   164,   165,   165,   165,   165,   165,   166
};

static const short yyr2[] = {     0,
     0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
     1,     1,     2,     2,     2,     1,     3,     2,     0,     2,
     1,     2,     5,     7,     1,     1,     1,     1,     5,     9,
     0,     1,     1,     1,     7,     1,     3,     7,     2,     2,
     3,     5,     5,     3,     4,     6,     0,     1,     1,     3,
     0,     1,     1,     1,     1,     3,     1,     4,     3,     3,
     1,     2,     2,     2,     4,     3,     2,     3,     1,     3,
     1,     1,     1,     2,     2,     1,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     3,     3,     1,
     3,     3,     1,     3,     3,     3,     1,     3,     3,     3,
     3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
     1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     3,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     1,
   148,   143,   144,   145,   146,   147,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    61,     0,    65,     0,     0,
     0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
    20,     0,     2,     3,     5,     7,     8,     0,     9,    10,
    11,    12,    35,    36,    37,    38,    13,    14,    15,    16,
    17,    18,     6,    67,    71,    81,    82,    83,    86,    96,
   100,   103,   107,   112,   115,   117,   119,   121,   123,   125,
   127,   141,     0,    63,    64,    50,     0,    49,    83,    87,
    64,     0,    41,     0,     0,    71,    72,     0,    62,     0,
    89,    25,    26,    29,    88,     0,     0,    90,    91,     0,
    94,    92,    93,    22,     0,    21,    95,     4,    24,     0,
     0,     0,    73,     0,     0,    74,    84,    85,   133,   134,
   130,   131,   138,   139,   140,   132,   135,   136,   137,   129,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    32,     0,     0,     0,     0,     0,    44,     0,    42,
     0,    83,    43,    57,     0,    70,    51,     0,     0,     0,
    28,     0,     0,    66,    19,    23,    77,     0,    79,    69,
     0,    76,     0,   128,    97,    98,    99,   101,   102,   104,
   106,   105,   109,   108,   110,   111,   113,   114,   116,   118,
   120,   122,   124,     0,   142,    54,    55,     0,    29,    61,
     0,     0,    58,    59,     0,     0,    27,    30,     0,     0,
    78,     0,    68,    75,     0,     0,    28,     0,     0,     0,
     0,    33,    53,    39,    52,    80,   126,     0,    61,     0,
    56,    60,     0,    48,     0,    45,    34,     0,    40,     0,
     0,     0
};

static const short yydefgoto[] = {   250,
    33,    34,    35,    36,   105,   106,    37,    38,    92,    93,
   171,    39,    40,    41,    42,    43,    44,   159,   160,    45,
   161,    46,    47,    48,    49,    50,    51,    52,    53,   212,
   213,    88,    54,    55,    56,    57,   113,   178,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,   131,    73,    74,    81
};

static const short yypact[] = {   241,
-32768,-32768,-32768,-32768,-32768,-32768,   -74,    82,   -69,   460,
   311,   -79,    45,   -28,    33,   460,   -26,-32768,   460,    45,
   460,   -22,    -8,   460,   460,-32768,   460,   460,   460,   460,
   311,   460,   241,-32768,-32768,-32768,-32768,     8,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   -77,-32768,   -59,   499,-32768,-32768,
   -48,   -88,    29,    15,   -25,   -30,   -15,    30,    47,   -24,
-32768,-32768,   -35,-32768,    18,-32768,    35,-32768,    31,-32768,
-32768,    74,   376,    58,   460,   -77,-32768,    61,    63,   460,
-32768,    64,-32768,    69,-32768,   460,   460,-32768,-32768,    16,
-32768,-32768,-32768,-32768,    48,   311,-32768,-32768,-32768,   395,
    45,   460,-32768,    45,   460,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
   460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
   460,-32768,   460,   311,   311,    60,    45,-32768,    65,-32768,
   118,   462,    63,    45,    28,-32768,-32768,    34,    45,   460,
-32768,    36,    40,-32768,-32768,-32768,-32768,    42,-32768,-32768,
   -67,-32768,   -53,-32768,-32768,-32768,-32768,   -48,   -48,   -88,
   -88,   -88,    29,    29,    29,    29,    15,    15,   -25,   -30,
   -15,    30,    47,    51,-32768,-32768,-32768,   460,    69,   460,
   460,    75,    73,-32768,   311,    57,-32768,-32768,   311,   311,
-32768,   460,-32768,-32768,   460,    44,   126,    81,    49,    57,
    45,   139,-32768,-32768,-32768,-32768,-32768,    84,   460,   311,
-32768,-32768,   311,-32768,    83,-32768,-32768,   311,-32768,   166,
   168,-32768
};

static const short yypgoto[] = {-32768,
-32768,   137,   -10,  -214,-32768,-32768,-32768,   107,-32768,    22,
   -17,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  -205,-32768,   178,   179,-32768,   -42,-32768,    39,-32768,
    -2,     1,   -34,   -61,    -6,    50,    52,    53,    54,    56,
-32768,-32768,   -75,-32768,   -13,   192,     0
};


#define	YYLAST		581


static const short yytable[] = {    75,
    82,   233,    89,    83,   228,   110,    76,    80,   135,   136,
    75,    78,    84,   100,   116,   241,    91,   153,    95,    94,
   104,    98,    99,   110,   111,   101,   102,   103,   112,   107,
    75,   153,    75,   245,   179,     1,     2,     3,     4,   223,
     5,     6,   114,   166,   150,   152,   115,     1,    79,   153,
   132,   133,   134,   224,    85,   184,    90,    79,   146,    79,
    96,   151,    79,    79,   144,   145,    79,    79,    79,   163,
    79,   165,   147,    15,    97,   204,   168,   205,   193,   194,
   195,   196,   172,   173,    18,     2,     3,     4,   109,     5,
     6,   137,   138,   139,   218,   176,   117,   118,   181,   174,
   153,   183,   190,   191,   192,    75,   140,   141,   142,   143,
   180,   215,   153,   182,   149,    27,   148,   216,   153,   219,
   153,   162,   154,   220,   153,   221,   222,   238,   153,   185,
   186,   187,   240,   153,   156,   188,   189,   197,   198,   155,
   164,   167,   208,   206,   207,   210,   236,   153,   169,   237,
   170,   175,   211,    75,    75,   225,   209,   231,   230,    31,
   -47,   239,   243,   214,   244,   251,   248,   252,    94,   108,
    79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
    79,    79,    79,    79,    79,    79,    79,    79,    79,   158,
   217,   227,    86,    87,   226,   199,    89,   229,   200,    77,
   201,     0,   202,     0,   232,   203,     0,     0,   234,   235,
     0,     0,     0,     0,    75,     0,     0,     0,    75,    75,
     0,     0,     0,     0,     0,    89,     0,     0,     0,   246,
   242,     0,   247,     0,     0,     0,     0,   249,     0,    75,
     0,     0,    75,     1,     2,     3,     4,    75,     5,     6,
     0,     0,     7,     0,     8,     0,     0,     0,     0,     9,
     0,    10,    11,     0,     0,     0,     0,     0,     0,    12,
    13,     0,    14,     0,     0,     0,     0,     0,     0,     0,
     0,    15,     0,     0,     0,     0,    16,     0,     0,     0,
    17,     0,    18,     0,     0,     0,     0,    19,    20,    21,
     0,    22,    23,     0,     0,     0,    24,    25,     0,     0,
     0,     0,     0,     1,     2,     3,     4,     0,     5,     6,
     0,    26,     7,    27,     8,     0,     0,     0,     0,     9,
     0,    10,    11,     0,     0,     0,    28,    29,    30,    12,
     0,     0,    14,    31,     0,     0,     0,     0,    32,     0,
     0,    15,     0,     0,     0,     0,    16,     0,     0,     0,
    17,     0,    18,     0,     0,     0,     0,    19,    20,    21,
     0,    22,    23,     0,     0,     0,    24,    25,     1,     2,
     3,     4,     0,     5,     6,     0,     0,     0,     0,     0,
     0,    26,     0,    27,     0,     0,    10,     1,     2,     3,
     4,     0,     5,     6,     0,     0,    28,    29,    30,     0,
     0,     0,     0,    31,     0,    10,    15,     0,    32,     0,
     0,     0,     0,     0,     0,     0,     0,    18,     0,     0,
     0,     0,    19,   157,    21,    15,     0,     0,     0,     0,
     0,    24,    25,     0,     0,     0,    18,     0,     0,     0,
     0,    19,     0,    21,     0,     0,     0,     0,    27,     0,
    24,    25,     1,     2,     3,     4,     0,     5,     6,     0,
     0,    28,    29,    30,     0,     0,     0,    27,   177,     0,
    10,     0,     0,    32,     0,     0,     0,     0,     0,     0,
    28,    29,    30,     0,     0,     0,   -46,     0,     0,     0,
    15,     0,    32,     0,     0,     0,     0,     0,     0,     0,
     0,    18,     0,     0,     0,     0,    19,     0,    21,     0,
     0,     0,     0,     0,     0,    24,    25,   117,   118,     0,
     0,   119,   120,   121,   122,   123,   124,   125,   126,   127,
   128,   129,    27,   130,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    28,    29,    30,     0,     0,
     0,     0,     0,     0,   117,   118,     0,    32,   119,   120,
   121,   122,   123,   124,   125,   126,   127,   128,   129,     0,
   130
};

static const short yycheck[] = {     0,
    11,   216,    16,    83,   210,    83,    81,    10,    97,    98,
    11,    81,    13,    27,    57,   230,    19,    85,    21,    20,
    31,    24,    25,    83,   102,    28,    29,    30,   106,    32,
    31,    85,    33,   239,   110,     3,     4,     5,     6,   107,
     8,     9,   102,    86,    69,    81,   106,     3,    10,    85,
    99,   100,   101,   107,    83,   131,    83,    19,    89,    21,
    83,    86,    24,    25,    90,    91,    28,    29,    30,    83,
    32,    85,    88,    41,    83,   151,    90,   153,   140,   141,
   142,   143,    96,    97,    52,     4,     5,     6,    81,     8,
     9,    63,    64,    65,   170,   106,    66,    67,   112,    84,
    85,   115,   137,   138,   139,   106,    92,    93,    94,    95,
   111,    84,    85,   114,    68,    83,    87,    84,    85,    84,
    85,    83,   105,    84,    85,    84,    85,    84,    85,   132,
   133,   134,    84,    85,    61,   135,   136,   144,   145,   105,
    83,    81,    83,   154,   155,    81,   222,    85,    85,   225,
    82,   104,    35,   154,   155,   105,   157,    85,    84,   103,
    35,    81,    24,   164,    81,     0,    84,     0,   169,    33,
   132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,    83,
   169,   209,    15,    15,   208,   146,   210,   211,   147,     8,
   148,    -1,   149,    -1,   215,   150,    -1,    -1,   219,   220,
    -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,   219,   220,
    -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,   240,
   231,    -1,   243,    -1,    -1,    -1,    -1,   248,    -1,   240,
    -1,    -1,   243,     3,     4,     5,     6,   248,     8,     9,
    -1,    -1,    12,    -1,    14,    -1,    -1,    -1,    -1,    19,
    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    29,
    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
    50,    -1,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
    -1,    61,    62,    -1,    -1,    -1,    66,    67,    -1,    -1,
    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
    -1,    81,    12,    83,    14,    -1,    -1,    -1,    -1,    19,
    -1,    21,    22,    -1,    -1,    -1,    96,    97,    98,    29,
    -1,    -1,    32,   103,    -1,    -1,    -1,    -1,   108,    -1,
    -1,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
    50,    -1,    52,    -1,    -1,    -1,    -1,    57,    58,    59,
    -1,    61,    62,    -1,    -1,    -1,    66,    67,     3,     4,
     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
    -1,    81,    -1,    83,    -1,    -1,    21,     3,     4,     5,
     6,    -1,     8,     9,    -1,    -1,    96,    97,    98,    -1,
    -1,    -1,    -1,   103,    -1,    21,    41,    -1,   108,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
    -1,    -1,    57,    58,    59,    41,    -1,    -1,    -1,    -1,
    -1,    66,    67,    -1,    -1,    -1,    52,    -1,    -1,    -1,
    -1,    57,    -1,    59,    -1,    -1,    -1,    -1,    83,    -1,
    66,    67,     3,     4,     5,     6,    -1,     8,     9,    -1,
    -1,    96,    97,    98,    -1,    -1,    -1,    83,    84,    -1,
    21,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,
    96,    97,    98,    -1,    -1,    -1,    35,    -1,    -1,    -1,
    41,    -1,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    59,    -1,
    -1,    -1,    -1,    -1,    -1,    66,    67,    66,    67,    -1,
    -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    83,    82,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    -1,    -1,
    -1,    -1,    -1,    -1,    66,    67,    -1,   108,    70,    71,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
    82
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 5:
#line 230 "src/jsGram.ycc"
{
	interpreter->execStatement(yyvsp[0].statement);
    ;
    break;}
case 6:
#line 234 "src/jsGram.ycc"
{
	interpreter->addFunction(yyvsp[0].fctDef);
  ;
    break;}
case 19:
#line 258 "src/jsGram.ycc"
{
	yyval.statement= new JsBlockStat(yyvsp[-1].statList);
    ;
    break;}
case 20:
#line 263 "src/jsGram.ycc"
{
	yyval.statList= NULL;
    ;
    break;}
case 22:
#line 271 "src/jsGram.ycc"
{
	yyval.statList= new JsStatementList(yyvsp[0].statement);
    ;
    break;}
case 23:
#line 275 "src/jsGram.ycc"
{
	yyvsp[-1].statList->addElement(yyvsp[0].statement);
    ;
    break;}
case 24:
#line 282 "src/jsGram.ycc"
{
	yyval.statement= new JsVariableStat(yyvsp[-1].varDeclList);
    ;
    break;}
case 25:
#line 289 "src/jsGram.ycc"
{
	yyval.varDeclList= yyvsp[0].varDeclList;
    ;
    break;}
case 26:
#line 296 "src/jsGram.ycc"
{
	yyval.varDeclList= new JsVarDeclList(yyvsp[0].varDecl);
    ;
    break;}
case 27:
#line 300 "src/jsGram.ycc"
{
	yyvsp[-2].varDeclList->addElement(yyvsp[0].varDecl);
    ;
    break;}
case 28:
#line 307 "src/jsGram.ycc"
{
	yyval.varDecl= new JsVarDeclaration(yyvsp[-1].identifier, yyvsp[0].expression);
    ;
    break;}
case 29:
#line 314 "src/jsGram.ycc"
{
	yyval.expression= NULL;
    ;
    break;}
case 30:
#line 318 "src/jsGram.ycc"
{
	yyval.expression= yyvsp[0].expression;
    ;
    break;}
case 31:
#line 325 "src/jsGram.ycc"
{
	yyval.statement= NULL;
    ;
    break;}
case 32:
#line 332 "src/jsGram.ycc"
{
	yyval.statement= new JsExpressionStat(yyvsp[-1].expression);
    ;
    break;}
case 33:
#line 339 "src/jsGram.ycc"
{
	yyval.statement= new JsIfThenStat(yyvsp[-2].expression, yyvsp[0].statement, NULL);
    ;
    break;}
case 34:
#line 343 "src/jsGram.ycc"
{
	yyval.statement= new JsIfThenStat(yyvsp[-4].expression, yyvsp[-2].statement, yyvsp[0].statement);
    ;
    break;}
case 39:
#line 357 "src/jsGram.ycc"
{
	yyval.statement= new JsWhileStat(yyvsp[-2].expression, yyvsp[0].statement);
    ;
    break;}
case 40:
#line 364 "src/jsGram.ycc"
{
	if (yyvsp[-6].syntaxElement == NULL) {
	    yyval.statement= new JsForStat((JsExpression *)NULL, yyvsp[-4].expression, yyvsp[-2].expression, yyvsp[0].statement);
	}
	else	if (yyvsp[-6].syntaxElement->category() == JsSyntaxElement::scExpression) {
	    yyval.statement= new JsForStat((JsExpression *)yyvsp[-6].syntaxElement, yyvsp[-4].expression, yyvsp[-2].expression, yyvsp[0].statement);
	}
	else {
	    yyval.statement= new JsForStat((JsVarDeclList *)yyvsp[-6].syntaxElement, yyvsp[-4].expression, yyvsp[-2].expression, yyvsp[0].statement);
	}
    ;
    break;}
case 41:
#line 379 "src/jsGram.ycc"
{
	yyval.syntaxElement= NULL;
    ;
    break;}
case 43:
#line 387 "src/jsGram.ycc"
{
	yyval.syntaxElement= (JsSyntaxElement *)yyvsp[0].expression;
    ;
    break;}
case 44:
#line 391 "src/jsGram.ycc"
{
	yyval.syntaxElement= (JsSyntaxElement *)yyvsp[0].varDeclList;
    ;
    break;}
case 45:
#line 398 "src/jsGram.ycc"
{
	if (yyvsp[-4].syntaxElement->category() == JsSyntaxElement::scExpression) {
	    yyval.statement= new JsForInStat((JsExpression *)yyvsp[-4].syntaxElement, yyvsp[-2].expression, yyvsp[0].statement);
	}
	else {
	    yyval.statement= new JsForInStat((JsVarDeclaration *)yyvsp[-4].syntaxElement, yyvsp[-2].expression, yyvsp[0].statement);
	}
    ;
    break;}
case 46:
#line 409 "src/jsGram.ycc"
{
	yyval.syntaxElement= (JsSyntaxElement *)yyvsp[0].expression;
    ;
    break;}
case 47:
#line 413 "src/jsGram.ycc"
{
	yyval.syntaxElement= (JsSyntaxElement *)new JsVarDeclaration(yyvsp[-1].identifier, yyvsp[0].expression);
    ;
    break;}
case 48:
#line 420 "src/jsGram.ycc"
{
	/*
		$$= new JsWhileStat($3, $5);
	*/
    ;
    break;}
case 49:
#line 428 "src/jsGram.ycc"
{
	yyval.statement= new JsContinueStat();
    ;
    break;}
case 50:
#line 435 "src/jsGram.ycc"
{
	yyval.statement= new JsBreakStat();
    ;
    break;}
case 51:
#line 443 "src/jsGram.ycc"
{
	yyval.statement= new JsReturnStat(yyvsp[-1].expression);
    ;
    break;}
case 52:
#line 450 "src/jsGram.ycc"
{
	yyval.statement= new JsWithStat(yyvsp[-2].expression, yyvsp[0].statement);
    ;
    break;}
case 53:
#line 457 "src/jsGram.ycc"
{
	/* TODO. */
	yyval.statement= NULL;
    ;
    break;}
case 54:
#line 465 "src/jsGram.ycc"
{
	/* TODO. */
	yyval.statement= NULL;
    ;
    break;}
case 55:
#line 470 "src/jsGram.ycc"
{
	/* TODO. */
	yyval.statement= NULL;
    ;
    break;}
case 56:
#line 478 "src/jsGram.ycc"
{
	yyval.fctDef= new JsFunctionDef(yyvsp[-4].identifier, yyvsp[-2].identList, yyvsp[0].statement);
    ;
    break;}
case 57:
#line 485 "src/jsGram.ycc"
{
	yyval.identList= NULL;
    ;
    break;}
case 59:
#line 493 "src/jsGram.ycc"
{
	yyval.identList= new JsIdentList(yyvsp[0].identifier);
    ;
    break;}
case 60:
#line 497 "src/jsGram.ycc"
{
	yyvsp[-2].identList->addElement(yyvsp[0].identifier);
    ;
    break;}
case 61:
#line 506 "src/jsGram.ycc"
{
	yyval.expression= NULL;
    ;
    break;}
case 64:
#line 515 "src/jsGram.ycc"
{
	/* Faire une reference var. */
    ;
    break;}
case 65:
#line 519 "src/jsGram.ycc"
{
	/* Faire une reference 'var' speciale. */
    ;
    break;}
case 66:
#line 523 "src/jsGram.ycc"
{
	yyval.expression= yyvsp[-1].expression;
    ;
    break;}
case 68:
#line 531 "src/jsGram.ycc"
{
	yyval.expression= new JsArrayExpr(yyvsp[-3].expression, yyvsp[-1].expression);
    ;
    break;}
case 69:
#line 535 "src/jsGram.ycc"
{
	yyval.expression= new JsFieldExpr(yyvsp[-2].expression, yyvsp[0].identifier);
    ;
    break;}
case 70:
#line 539 "src/jsGram.ycc"
{
	yyval.expression= new JsNewExpr(yyvsp[-1].expression, yyvsp[0].exprList);
    ;
    break;}
case 72:
#line 547 "src/jsGram.ycc"
{
	yyval.expression= new JsNewExpr(yyvsp[0].expression, NULL);
    ;
    break;}
case 73:
#line 554 "src/jsGram.ycc"
{
	yyval.expression= new JsCallExpr(yyvsp[-1].expression, yyvsp[0].exprList);
    ;
    break;}
case 74:
#line 558 "src/jsGram.ycc"
{
	yyval.expression= new JsCallExpr(yyvsp[-1].expression, yyvsp[0].exprList);
    ;
    break;}
case 75:
#line 562 "src/jsGram.ycc"
{
	yyval.expression= new JsArrayExpr(yyvsp[-3].expression, yyvsp[-1].expression);
    ;
    break;}
case 76:
#line 566 "src/jsGram.ycc"
{
	yyval.expression= new JsFieldExpr(yyvsp[-2].expression, yyvsp[0].identifier);
    ;
    break;}
case 77:
#line 573 "src/jsGram.ycc"
{
	yyval.exprList= NULL;
    ;
    break;}
case 78:
#line 577 "src/jsGram.ycc"
{
	yyval.exprList= yyvsp[-1].exprList;
    ;
    break;}
case 79:
#line 584 "src/jsGram.ycc"
{
	yyval.exprList= new JsExprList(yyvsp[0].expression);
      ;
    break;}
case 80:
#line 588 "src/jsGram.ycc"
{
	yyvsp[-2].exprList->addElement(yyvsp[0].expression);
    ;
    break;}
case 84:
#line 601 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::postIncr, yyvsp[-1].expression, NULL);
    ;
    break;}
case 85:
#line 605 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::postDecr, yyvsp[-1].expression, NULL);
    ;
    break;}
case 87:
#line 613 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::del, yyvsp[0].expression, NULL);
    ;
    break;}
case 88:
#line 617 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::opVoid, yyvsp[0].expression, NULL);
    ;
    break;}
case 89:
#line 621 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::opTypeof, yyvsp[0].expression, NULL);
    ;
    break;}
case 90:
#line 625 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::preIncr, yyvsp[0].expression, NULL);
    ;
    break;}
case 91:
#line 629 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::preDecr, yyvsp[0].expression, NULL);
    ;
    break;}
case 92:
#line 633 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::posate, yyvsp[0].expression, NULL);
    ;
    break;}
case 93:
#line 637 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::negate, yyvsp[0].expression, NULL);
    ;
    break;}
case 94:
#line 641 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::bitnot, yyvsp[0].expression, NULL);
    ;
    break;}
case 95:
#line 645 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::loginot, yyvsp[0].expression, NULL);
    ;
    break;}
case 97:
#line 653 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::mult, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 98:
#line 657 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::div, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 99:
#line 661 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::mod, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 101:
#line 669 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::add, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 102:
#line 673 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::sub, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 104:
#line 681 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::lshift, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 105:
#line 685 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::rshift, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 106:
#line 689 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::rushift, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 108:
#line 697 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::lt, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 109:
#line 701 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::gt, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 110:
#line 705 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::ge, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 111:
#line 709 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::le, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 113:
#line 717 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::eq, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 114:
#line 721 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::ne, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 116:
#line 729 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::bitAnd, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 118:
#line 737 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::bitXor, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 120:
#line 745 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::bitIor, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 122:
#line 753 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::logiAnd, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 124:
#line 761 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr(JsOperatorExpr::logiOr, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 126:
#line 769 "src/jsGram.ycc"
{
	yyval.expression= new JsCondExpr(yyvsp[-4].expression, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 128:
#line 777 "src/jsGram.ycc"
{
	yyval.expression= new JsOperatorExpr((JsOperatorExpr::Operator)yyvsp[-1].integerNumber, yyvsp[-2].expression, yyvsp[0].expression);
    ;
    break;}
case 129:
#line 784 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::put;
    ;
    break;}
case 130:
#line 788 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::multPut;
    ;
    break;}
case 131:
#line 792 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::divPut;
    ;
    break;}
case 132:
#line 796 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::modPut;
    ;
    break;}
case 133:
#line 800 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::addPut;
    ;
    break;}
case 134:
#line 804 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::subPut;
    ;
    break;}
case 135:
#line 808 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::lshiftPut;
    ;
    break;}
case 136:
#line 812 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::rshiftPut;
    ;
    break;}
case 137:
#line 816 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::rushiftPut;
    ;
    break;}
case 138:
#line 820 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::andPut;
    ;
    break;}
case 139:
#line 824 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::orPut;
    ;
    break;}
case 140:
#line 828 "src/jsGram.ycc"
{
	yyval.integerNumber= JsOperatorExpr::notPut;
    ;
    break;}
case 142:
#line 836 "src/jsGram.ycc"
{
	yyvsp[0].expression->subLink(yyvsp[-2].expression);
	yyval.expression= yyvsp[0].expression;
    ;
    break;}
case 143:
#line 844 "src/jsGram.ycc"
{
	yyval.expression= new JsConstantExpr(yyvsp[0].boolValue);
    ;
    break;}
case 144:
#line 848 "src/jsGram.ycc"
{
	yyval.expression= new JsConstantExpr(yyvsp[0].floatNumber);
    ;
    break;}
case 145:
#line 852 "src/jsGram.ycc"
{
	yyval.expression= new JsConstantExpr(yyvsp[0].integerNumber);
    ;
    break;}
case 146:
#line 856 "src/jsGram.ycc"
{
	yyval.expression= new JsConstantExpr(yyvsp[0].string);
    ;
    break;}
case 147:
#line 860 "src/jsGram.ycc"
{
	yyval.expression= new JsConstantExpr();
    ;
    break;}
case 148:
#line 867 "src/jsGram.ycc"
{
	yyval.identifier= new JsIdentifier(yyvsp[0].string);
    ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 872 "src/jsGram.ycc"


/* --------------- Fin de la grammaire --------------- */

