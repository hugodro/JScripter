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


extern YYSTYPE jscrlval;
