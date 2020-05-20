/**************************************************
* File: fctDefinition.cc.
* Desc: Implantation de la classe JsFunctionDef.
* Module: AkraLog : JScripter.
* Revision: 8 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "identifier.h"
#include "lists.h"
#include "statements.h"
#include "fctDefinition.h"


JsFunctionDef::JsFunctionDef(JsIdentifier *anIdent, JsIdentList *someIdents, JsStatement *content)
    : JsSyntaxElement()
{
    name= anIdent;
    parameters= someIdents;
    actions= content;
}


JsSyntaxElement::SyntaxCategory JsFunctionDef::category(void)
{
    return JsSyntaxElement::scFctDef;
}


