/**************************************************
* File: statements.cc.
* Desc: Implantation des statements JavaScript.
* Module: AkraLog : JScripter.
* Revision: 8 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "lists.h"
#include "varDecl.h"
#include "expressions.h"
#include "statements.h"


/**************************************************
* Implementation: JsStatement.
**************************************************/

JsStatement::JsStatement(void)
    : JsSyntaxElement()
{
// TODO.
}


JsSyntaxElement::SyntaxCategory JsStatement::category(void)
{
    return JsSyntaxElement::scStatement;
}


/**************************************************
* Implementation: JsBlockStat.
**************************************************/
JsBlockStat::JsBlockStat(JsStatementList *statList)
    : JsStatement()
{
    subStatements= statList;
}


/**************************************************
* Implementation: JsVariableStat.
**************************************************/
JsVariableStat::JsVariableStat(JsVarDeclList *varDecl)
    : JsStatement()
{
    declarations= varDecl;
}


/**************************************************
* Implementation: JsExpressionStat.
**************************************************/
JsExpressionStat::JsExpressionStat(JsExpression *anExpr)
    : JsStatement()
{
    expression= anExpr;
}


/**************************************************
* Implementation: JsIfThenStat.
**************************************************/
JsIfThenStat::JsIfThenStat(JsExpression *testExpr, JsStatement *thenAction, JsStatement *elseAction)
    : JsStatement()
{
    test= testExpr;
    caseTrue= thenAction;
    caseFalse= elseAction;
}


/**************************************************
* Implementation: JsWhileStat.
**************************************************/

JsWhileStat::JsWhileStat(JsExpression *anExpr, JsStatement *aStatement)
    : JsStatement()
{
    loopTest= anExpr;
    iterated= aStatement;
}


/**************************************************
* Implementation: JsForStat.
**************************************************/
JsForStat::JsForStat(JsExpression *anInit, JsExpression *aTest, JsExpression *testModifier, JsStatement *aStatement)
    : JsStatement()
{
    localDeclarations= NULL;
    initializer= anInit;
    loopTest= aTest;
    loopExpression= testModifier;
    iterated= aStatement;
}


JsForStat::JsForStat(JsVarDeclList *anInit, JsExpression *aTest, JsExpression *testModifier, JsStatement *aStatement)
    : JsStatement()
{
    localDeclarations= anInit;
    initializer= NULL;
    // TODO: Peut-etre transferer les initialisateurs de localDecl dans initializer.
    loopTest= aTest;
    loopExpression= testModifier;
    iterated= aStatement;
}


/**************************************************
* Implementation: JsForInStat.
**************************************************/

JsForInStat:: JsForInStat(JsExpression *anExpr, JsExpression *list, JsStatement *aStatement)
    : JsStatement()
{
    localVar= NULL;
    initializer= anExpr;
    listProvider= list;
    iterated= aStatement;
}


JsForInStat:: JsForInStat(JsVarDeclaration *aVarDecl, JsExpression *list, JsStatement *aStatement)
    : JsStatement()
{
    localVar= aVarDecl;
    initializer= NULL;
    listProvider= list;
    iterated= aStatement;
}


/**************************************************
* Implementation: JsContinueStat.
**************************************************/

JsContinueStat::JsContinueStat(void)
    : JsStatement()
{
// TODO.
}


/**************************************************
* Implementation: JsBreakStat.
**************************************************/

JsBreakStat::JsBreakStat(void)
    : JsStatement()
{
// TODO.
}


/**************************************************
* Implementation: JsReturnStat.
**************************************************/

JsReturnStat::JsReturnStat(JsExpression *anExpr)
    : JsStatement()
{
// TODO.
}


/**************************************************
* Implementation: JsWithStat.
**************************************************/

JsWithStat::JsWithStat(JsExpression *anExpr, JsStatement *aStatement)
    : JsStatement()
{
    context= anExpr;
    bindedStatement= aStatement;
}


