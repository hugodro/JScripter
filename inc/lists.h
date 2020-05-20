#ifndef JS_LISTS_H_
#define JS_LISTS_H_
/**************************************************
* File: lists.h.
* Desc: Definition des classes contenant des listes d'elements.
* Module: AkraLog : JScripter.
* Revision: 7 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "syntaxElement.h"


class JsStatement;
class JsExpression;
class JsVarDeclaration;
class JsIdentifier;


class JsElementList : public JsSyntaxElement {
  public:		// Instance methods.
    JsElementList(void);
};


class JsStatementList : public JsElementList {
  public:		// Instance methods.
    JsStatementList(JsStatement *aStatement);
    virtual SyntaxCategory category(void);
    virtual void addElement(JsStatement *aStatement);
};


class JsVarDeclList : public JsElementList {
  public:		// Instance methods.
    JsVarDeclList(JsVarDeclaration *aDecl);
    virtual SyntaxCategory category(void);
    virtual void addElement(JsVarDeclaration *aDecl);
};


class JsIdentList : public JsElementList {
  public:		// Instance methods.
    JsIdentList(JsIdentifier *anIdent);
    virtual SyntaxCategory category(void);
    virtual void addElement(JsIdentifier *anIdent);
};


class JsExprList : public JsElementList {
  public:		// Instance methods.
    JsExprList(JsExpression *anExpr);
    virtual SyntaxCategory category(void);
    virtual void addElement(JsExpression *anExpr);
};


#endif		/* JS_LISTS_H_ */

