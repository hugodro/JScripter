/**************************************************
* File: varDecl.cc.
* Desc: Implantation de la class JsVarDeclaration.
* Module: AkraLog : JScripter.
* Revision: 7 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "identifier.h"
#include "expressions.h"
#include "varDecl.h"


JsVarDeclaration::JsVarDeclaration(JsIdentifier *aVar, JsExpression *initializer)
    : JsSyntaxElement()
{
    name= aVar;
    initValue= initializer;
}


JsSyntaxElement::SyntaxCategory JsVarDeclaration::category(void)
{
    return JsSyntaxElement::scVarDecl;
}

