#ifndef JS_STATEMENTS_H_
#define JS_STATEMENTS_H_
/**************************************************
* File: statements.h.
* Desc: Definition des statements JavaScript.
* Module: AkraLog : JScripter.
* Revision: 7 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "syntaxElement.h"


class JsStatementList;
class JsVarDeclList;
class JsIdentList;
class JsVarDeclaration;
class JsExpression;


class JsStatement : public JsSyntaxElement {
  protected:		// Instance variables.
  public:			// Instance methods.
    JsStatement(void);
    virtual SyntaxCategory category(void);
};


class JsBlockStat : public JsStatement {
  protected:		// Instance variables.
    JsStatementList *subStatements;

  public:			// Instance methods.
    JsBlockStat(JsStatementList *statList);
};


class JsVariableStat : public JsStatement {
  protected:		// Instance variables.
    JsVarDeclList *declarations;

  public:			// Instance methods.
    JsVariableStat(JsVarDeclList *varDecl);
};


class JsExpressionStat : public JsStatement {
  protected:		// Instance variables.
    JsExpression *expression;

  public:			// Instance methods.
    JsExpressionStat(JsExpression *anExpr);
};


class JsIfThenStat : public JsStatement {
  protected:		// Instance variables.
    JsExpression *test;
    JsStatement *caseTrue;
    JsStatement *caseFalse;

  public:			// Instance methods.
    JsIfThenStat(JsExpression *testExpr, JsStatement *thenAction, JsStatement *elseAction);
};


class JsWhileStat : public JsStatement {
  protected:		// Instance variables.
    JsExpression *loopTest;
    JsStatement *iterated;

  public:			// Instance methods.
    JsWhileStat(JsExpression *anExpr, JsStatement *aStatement);
};


class JsForStat : public JsStatement {
  protected:		// Instance variables.
    JsVarDeclList *localDeclarations;
    JsExpression *initializer;
    JsExpression *loopTest;
    JsExpression *loopExpression;
    JsStatement *iterated;

  public:			// Instance methods.
    JsForStat(JsExpression *anInit, JsExpression *aTest, JsExpression *testModifier, JsStatement *aStatement);
    JsForStat(JsVarDeclList *anInit, JsExpression *aTest, JsExpression *testModifier, JsStatement *aStatement);
};


// ATTN: Sans doute qu'il vaut mieux faire les deux 'For' d'une racine
// 	commune.
class JsForInStat : public JsStatement {
  protected:		// Instance variables.
    JsVarDeclaration *localVar;
    JsExpression *initializer;
    JsExpression *listProvider;
    JsStatement *iterated;

  public:			// Instance methods.
    JsForInStat(JsExpression *anExpr, JsExpression *list, JsStatement *aStatement);
    JsForInStat(JsVarDeclaration *aVarDecl, JsExpression *list, JsStatement *aStatement);
};


class JsContinueStat : public JsStatement {
  protected:		// Instance variables.
  public:			// Instance methods.
    JsContinueStat(void);
};


class JsBreakStat : public JsStatement {
  protected:		// Instance variables.
  public:			// Instance methods.
    JsBreakStat(void);
};


class JsReturnStat : public JsStatement {
  protected:		// Instance variables.
  public:			// Instance methods.
    JsReturnStat(JsExpression *anExpr);
};


class JsWithStat : public JsStatement {
  protected:		// Instance variables.
    JsExpression *context;
    JsStatement *bindedStatement;

  public:			// Instance methods.
    JsWithStat(JsExpression *anExpr, JsStatement *aStatement);
};



#endif		/* JS_STATEMENTS_H_ */


