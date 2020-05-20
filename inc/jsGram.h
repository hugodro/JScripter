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
#define	IDENTIFIER_KW	258
#define	LITERAL_BOOLEAN	259
#define	LITERAL_FLOAT	260
#define	LITERAL_INT	261
#define	LITERAL_LONG	262
#define	LITERAL_STRING	263
#define	LITERAL_NULL	264
#define	ABSTRACT_KW	265
#define	BOOLEAN_KW	266
#define	BREAK_KW	267
#define	BYTE_KW	268
#define	CASE_KW	269
#define	CATCH_KW	270
#define	CHAR_KW	271
#define	CLASS_KW	272
#define	CONST_KW	273
#define	CONTINUE_KW	274
#define	DEFAULT_KW	275
#define	DELETE_KW	276
#define	DO_KW	277
#define	DOUBLE_KW	278
#define	ELSE_KW	279
#define	EXTENDS_KW	280
#define	FINAL_KW	281
#define	FINALLY_KW	282
#define	FLOAT_KW	283
#define	FOR_KW	284
#define	FUNCTION_KW	285
#define	GOTO_KW	286
#define	IF_KW	287
#define	IMPLEMENTS_KW	288
#define	IMPORT_KW	289
#define	IN_KW	290
#define	INSTANCEOF_KW	291
#define	INT_KW	292
#define	INTERFACE_KW	293
#define	LONG_KW	294
#define	NATIVE_KW	295
#define	NEW_KW	296
#define	PACKAGE_KW	297
#define	PRIVATE_KW	298
#define	PROTECTED_KW	299
#define	PUBLIC_KW	300
#define	RETURN_KW	301
#define	SHORT_KW	302
#define	STATIC_KW	303
#define	SUPER_KW	304
#define	SWITCH_KW	305
#define	SYNCHRONIZED_KW	306
#define	THIS_KW	307
#define	THROW_KW	308
#define	THROWS_KW	309
#define	TRANSIENT_KW	310
#define	TRY_KW	311
#define	TYPEOF_KW	312
#define	VAR_KW	313
#define	VOID_KW	314
#define	VOLATILE_KW	315
#define	WHILE_KW	316
#define	WITH_KW	317
#define	LS_KW	318
#define	URS_KW	319
#define	RS_KW	320
#define	ICR_KW	321
#define	DECR_KW	322
#define	ANDAND_KW	323
#define	OROR_KW	324
#define	PLUSASSIGN_KW	325
#define	MINUSASSIGN_KW	326
#define	TIMEASSIGN_KW	327
#define	DIVIDEASSIGN_KW	328
#define	ANDASSIGN_KW	329
#define	ORASSIGN_KW	330
#define	NOTASSIGN_KW	331
#define	MODASSIGN_KW	332
#define	LSASSIGN_KW	333
#define	RSASSIGN_KW	334
#define	URSASSIGN_KW	335
#define	EQ_KW	336
#define	NE_KW	337
#define	GE_KW	338
#define	LE_KW	339


extern YYSTYPE jscrlval;
