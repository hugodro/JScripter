/**************************************************
* File: lexhelp.c.
* Desc: Contains helpful functions for the compiler parser.
* Module: AkraLog : JScripter.
* Rev: 5 novembre 1997 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include <stdio.h>
#include <akra/portableDefs.h>
#include "specialTypes.h"

#include "statements.h"
#include "expressions.h"
#include "varDecl.h"
#include "identifier.h"
#include "lists.h"
#include "fctDefinition.h"
#include "jsGram.h"

#include "jscFlexer.h"


extern FILE *yyin;
extern int isInSubset;
extern JscFlexer *flexer;

int yylineno;

#ifndef EOF_CHAR
#define EOF_CHAR	-1
#endif

void ShowCompilerMessage(int , void *, char *);
// void yyerror(char *);
void jscrerror(char *);
int input(void);
void unput(int);
// int yylex(void);
int jscrlex(void);


/********************************************************
* Fonction: PasseCommentaire1.
* Desc: Prend une suite de commentaire (commencee par '/''*')
*       et ignore tout ce qui suit, jusqu'a '*''/'.
* Args: Aucun.
* Renvoie: Rien.
********************************************************/

void PasseCommentaire1(void)
{
    char lastChar, c;

    while (1) {
	while ((c = input()) != '/') lastChar= c;
	if (lastChar == '*') {
	    return;
	 }
        else if (c == EOF_CHAR) {
//	    sprintf(ErrorMsgBuffer, "While in comment: unexpected EOF.\n");
//	    AddWarning(NULL, ErrorMsgBuffer);
	    return;
	 }
	else lastChar= c;
    }
}


/********************************************************
* Fonction: PasseComentaire2.
* Desc: Prend une suite de commentaire (commencee par '/''/')
*       et ignore tout ce qui suit, jusqu'a la fin de la ligne.
* Args: Aucun.
* Renvoie: Rien.
********************************************************/

void PasseCommentaire2(void)
{
    char c;

    while ((c = input()) != '\n') {
	if (c == EOF_CHAR) {
	    break;
	 }
     }

    if (c == '\n') unput(c);

    return;
}

// Temp locations for the file input/output functions.
#if defined(USE_YACC)
int input(void)	
{

    yytchar= (yysptr>yysbuf) ? (*--yysptr) : getc(yyin);
    if (yytchar =='\n') {
//	fprintf(stdout, "Got line %d.\n", yylineno);
	yylineno++;
     }
    else if (yytchar == EOF_CHAR) yytchar= 0;
    return (int)yytchar;
}


void unput(char c)
{
    unsigned int lineNumber= 0;

    yytchar= (c);
    if (yytchar=='\n') yylineno--;
    *yysptr++=yytchar;
}
#else		// For BISON/FLEX.


#endif

void output(char c)
{
//    printf("Call to 'output'(%c)... Internal error.\n", c);
}


void jscrerror(char *msg)
{
    fprintf(stderr, "%s on line %d.\n", msg, flexer->getLineNbr());
}


int GetTokenID(char *aName)
{
#define NBR_KEYWORDS	53
    char *tokenTable[255][80];
    char *entryPoint;
    int resultat= -1, tmpCmp;
    unsigned int i;

    char *tokens[NBR_KEYWORDS]= {
	"abstract", "boolean", "break", "byte",
	"case", "catch", "char", "class",
	"const", "continue","default", "delete",
	"do", "double", "else", "extends",
	"final", "finally", "float", "for",
	"function", "goto", "if", "implements",
	"import", "in", "instanceof", "int",
	"interface", "long", "native", "new",
	"package", "private", "protected", "public",
	"return", "short", "static", "super",
	"switch", "synchronized", "this", "throw",
	"throws", "transient", "try", "typeof",
	"var", "void", "volatile", "while",
	"with"
    };

    int tokensID[NBR_KEYWORDS]= {
	ABSTRACT_KW, BOOLEAN_KW, BREAK_KW, BYTE_KW,
	CASE_KW, CATCH_KW, CHAR_KW,
	CLASS_KW, CONST_KW, CONTINUE_KW,
	DEFAULT_KW, DELETE_KW, DO_KW, DOUBLE_KW, ELSE_KW,
	EXTENDS_KW, FINAL_KW, FINALLY_KW, FLOAT_KW,
	FOR_KW, FUNCTION_KW, GOTO_KW, IF_KW,
	IMPLEMENTS_KW, IMPORT_KW, IN_KW,
	INSTANCEOF_KW, INT_KW, INTERFACE_KW, LONG_KW, NATIVE_KW,
	NEW_KW, PACKAGE_KW,
	PRIVATE_KW, PROTECTED_KW, PUBLIC_KW,
	RETURN_KW, SHORT_KW, STATIC_KW, SUPER_KW, SWITCH_KW,
	SYNCHRONIZED_KW, THIS_KW, THROW_KW, THROWS_KW, TRANSIENT_KW,
	TRY_KW, TYPEOF_KW, VAR_KW, VOID_KW, VOLATILE_KW,
	WHILE_KW, WITH_KW
     };

    if (aName[0] == 'a') i= 0;
    else if (aName[0] == 'b') i= 1;
    else if (aName[0] == 'c') i= 4;
    else if (aName[0] == 'd') i= 10;
    else if (aName[0] == 'e') i= 14;
    else if (aName[0] == 'f') i= 16;
    else if (aName[0] == 'g') i= 21;
    else if (aName[0] == 'i') i= 22;
    else if (aName[0] == 'l') i= 29;
    else if (aName[0] == 'n') i= 30;
    else if (aName[0] == 'p') i= 32;
    else if (aName[0] == 'r') i= 36;
    else if (aName[0] == 's') i= 37;
    else if (aName[0] == 't') i= 42;
    else if (aName[0] == 'v') i= 48;
    else if (aName[0] == 'w') i= 51;
    else i= NBR_KEYWORDS;

    for (; i < NBR_KEYWORDS; i++) {
	if ((tmpCmp=  strcmp(aName, tokens[i])) == 0) {
	    if ((tokensID[i] != BREAK_KW) && (tokensID[i] != CONTINUE_KW) && (tokensID[i] != DELETE_KW)
	    	&& (tokensID[i] != ELSE_KW) && (tokensID[i] != FOR_KW) && (tokensID[i] != FUNCTION_KW)
	    	&& (tokensID[i] != IF_KW) && (tokensID[i] != IN_KW) && (tokensID[i] != NEW_KW)
	    	&& (tokensID[i] != RETURN_KW) && (tokensID[i] != THIS_KW) && (tokensID[i] != TYPEOF_KW)
	    	&& (tokensID[i] != VAR_KW) && (tokensID[i] != VOID_KW) && (tokensID[i] != WHILE_KW)
	    	&& (tokensID[i] != WITH_KW)) {
		i= NBR_KEYWORDS;
		ShowCompilerMessage(0, "Warning, use of future reserved word '%s'.\n", aName);
	     }
	    break;
	}
	else if (tmpCmp < 0) {
	    i= NBR_KEYWORDS;
	    break;
	}
    }
    if (i < NBR_KEYWORDS) return tokensID[i];
    else return -1;

    return resultat;
}


void ShowCompilerMessage(int aMsg, void *data, char *moreData)
{
    printf("ShowCompilerMessage: msg %d.\n", aMsg);
}


int input(void)
{
    return flexer->getInput();
}


void unput(int aChar)
{

}


int jscrlex( void )
{
    return flexer->yylex();
}
