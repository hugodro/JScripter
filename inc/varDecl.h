#ifndef JS_VARIABLEDECLARATION_H_
#define JS_VARIABLEDECLARATION_H_
/**************************************************
* File: varDecl.h.
* Desc: Definition de la class JsVarDeclaration.
* Module: AkraLog : JScripter.
* Revision: 7 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "syntaxElement.h"

class JsIdentifier;
class JsExpression;


class JsVarDeclaration : public JsSyntaxElement {
  protected:	// Instance variables.
    JsIdentifier *name;
    JsExpression *initValue;

  public:		// Instance methods.
    JsVarDeclaration(JsIdentifier *aVar, JsExpression *initializer);
    virtual SyntaxCategory category(void);
};


#endif		/* JS_VARIABLEDECLARATION_H_ */
