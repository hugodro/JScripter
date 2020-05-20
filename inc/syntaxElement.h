#ifndef JS_SYNTAXELEMENT_H_
#define JS_SYNTAXELEMENT_H_
/**************************************************
* File: syntaxElement.h.
* Desc: Definition de la base de tout element syntaxique.
* Module: AkraLog : JScripter.
* Revision: 7 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include <akra/AkObject.h>
#include <akra/portableDefs.h>


class JsSyntaxElement : public AkObject {
  public:
    enum SyntaxCategory {
	scStatement, scExpression, scStatList, scVarList
	, scVarDecl, scIdentifier, scIdentList, scFctDef
	, scExprList
    };

  protected:
    JsSyntaxElement *next;

  public:
    JsSyntaxElement(void);
    virtual SyntaxCategory category(void)= 0;
};

#endif		/* JS_SYNTAXELEMENT_H_ */
