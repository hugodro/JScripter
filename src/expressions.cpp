/**************************************************
* File: expressions.cc.
* Desc: Definition des expressions JavaScript.
* Module: AkraLog : JScripter.
* Revision: 8 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "identifier.h"
#include "lists.h"
#include "expressions.h"


/**************************************************
* Implementation: JsExpression.
**************************************************/

JsExpression::JsExpression(void)
    : JsSyntaxElement()
{
    linkedExpr= NULL;
}


JsSyntaxElement::SyntaxCategory JsExpression::category(void)
{
    return JsSyntaxElement::scExpression;
}


void JsExpression::subLink(JsExpression *anExpression)
{
    linkedExpr= anExpression;
}



/**************************************************
* Implementation: JsConstantExpr.
**************************************************/

JsConstantExpr::JsConstantExpr(void)
    : JsExpression()
{
    type= ctUnknown;
}


JsConstantExpr::JsConstantExpr(bool aValue)
    : JsExpression()
{
    type= ctBoolean;
    value.bytes= (void *)aValue;
}


JsConstantExpr::JsConstantExpr(int aValue)
    : JsExpression()
{
    type= ctInteger;
    value.bytes= (void *)aValue;
}


JsConstantExpr::JsConstantExpr(double aValue)
    : JsExpression()
{
    type= ctFloat;
    value.number= aValue;
}


JsConstantExpr::JsConstantExpr(short unsigned *aValue)
    : JsExpression()
{
    type= ctString;
    value.bytes= aValue;
}


/**************************************************
* Implementation: JsArrayExpr.
**************************************************/

JsArrayExpr::JsArrayExpr(JsExpression *aSource, JsExpression *aDisp)
    : JsExpression()
{
    source= aSource;
    index= aDisp;
}


/**************************************************
* Implementation: JsFieldExpr.
**************************************************/

JsFieldExpr::JsFieldExpr(JsExpression *aContainer, JsIdentifier *anIdent)
    : JsExpression()
{
    owner= aContainer;
    field= anIdent;
}


/*************************************************
* Implementation: JsCallExpr.
**************************************************/

JsCallExpr::JsCallExpr(JsExpression *classExpr, JsExprList *exprList)
    : JsExpression()
{
    receiver= classExpr;
    arguments= exprList;
}


/**************************************************
* Implementation: JsNewExpr.
**************************************************/

JsNewExpr::JsNewExpr(JsExpression *classExpr, JsExprList *exprList)
    : JsCallExpr(classExpr, exprList)
{
// TODO.
}


/**************************************************
* Implementation: JsOperatorExpr.
**************************************************/

JsOperatorExpr::JsOperatorExpr(Operator anOperator, JsExpression *arg1, JsExpression *arg2)
    : JsExpression()
{
    oper= anOperator;
    left= arg1;
    right= arg2;
}


/**************************************************
* Implementation: JsOperatorExpr.
**************************************************/

JsCondExpr::JsCondExpr(JsExpression *anExpr, JsExpression *trueExpr, JsExpression *falseExpr)
    : JsExpression()
{
    test= anExpr;
    caseTrue= trueExpr;
    caseFalse= falseExpr;
}

