#ifndef JS_FUNCTIONDEF_H_
#define JS_FUNCTIONDEF_H_
/**************************************************
* File: fctDefinition.h.
* Desc: Definition de la classe JsFunctionDef.
* Module: AkraLog : JScripter.
* Revision: 7 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "syntaxElement.h"

class JsIdentifier;
class JsIdentList;
class JsStatement;


class JsFunctionDef : public JsSyntaxElement {
  protected:
    JsIdentifier *name;
    JsIdentList *parameters;
    JsStatement *actions;

  public:
    JsFunctionDef(JsIdentifier *anIdent, JsIdentList *someIdents, JsStatement *content);
    virtual SyntaxCategory category(void);
};

#endif		/* JS_FUNCTIONDEF_H_ */


