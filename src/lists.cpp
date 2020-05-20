/**************************************************
* File: lists.cc.
* Desc: Implantation des classes contenant des listes d'elements.
* Module: AkraLog : JScripter.
* Revision: 8 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "statements.h"
#include "expressions.h"
#include "varDecl.h"
#include "identifier.h"
#include "lists.h"


/**************************************************
* Implementation: JsElementList.
**************************************************/

JsElementList::JsElementList(void)
    : JsSyntaxElement()
{
// TODO.
}


/**************************************************
* Implementation: JsStatementList.
**************************************************/

JsStatementList::JsStatementList(JsStatement *aStatement)
    : JsElementList()
{
// TODO.
}


JsSyntaxElement::SyntaxCategory JsStatementList::category(void)
{
    return JsSyntaxElement::scStatList;
}


void JsStatementList::addElement(JsStatement *aStatement)
{
// TODO.
}


/**************************************************
* Implementation: JsVarDeclList.
**************************************************/

JsVarDeclList::JsVarDeclList(JsVarDeclaration *aDecl)
    : JsElementList()
{
// TODO.
}


JsSyntaxElement::SyntaxCategory JsVarDeclList::category(void)
{
    return JsSyntaxElement::scVarList;
}


void JsVarDeclList::addElement(JsVarDeclaration *aDecl)
{
// TODO.
}


/**************************************************
* Implementation: JsIdentList.
**************************************************/

JsIdentList::JsIdentList(JsIdentifier *anIdent)
    : JsElementList()
{

}


JsSyntaxElement::SyntaxCategory JsIdentList::category(void)
{
    return JsSyntaxElement::scIdentList;
}


void JsIdentList::addElement(JsIdentifier *anIdent)
{
// TODO.
}


/**************************************************
* Implementation: JsExprList.
**************************************************/

JsExprList::JsExprList(JsExpression *anExpr)
    : JsElementList()
{
// TODO.
}


JsSyntaxElement::SyntaxCategory JsExprList::category(void)
{
    return JsSyntaxElement::scExprList;
}


void JsExprList::addElement(JsExpression *anExpr)
{
// TODO.
}
