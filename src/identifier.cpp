/**************************************************
* File: identifier.cc.
* Desc: Implantation de la class JsIdentifier.
* Module: AkraLog : JScripter.
* Revision: 8 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "identifier.h"

AkUniqueStringTable *JsIdentifier::strings= NULL;

JsIdentifier::JsIdentifier(short unsigned *aName)
    : JsSyntaxElement()
{
// TODO: remplir valuer avec un equivalent unique de 'aName'.
}

JsSyntaxElement::SyntaxCategory JsIdentifier::category(void)
{
    return JsSyntaxElement::scIdentifier;
}


bool JsIdentifier::isEqual(JsIdentifier *anIdent)
{
// TODO.
}

