#ifndef JS_IDENTIFIER_H_
#define JS_IDENTIFIER_H_
/**************************************************
* File: identifier.h.
* Desc: Definition de la class JsIdentifier.
* Module: AkraLog : JScripter.
* Revision: 7 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "syntaxElement.h"


class AkUniqueStringTable;
class AkUniqueString;


class JsIdentifier : public JsSyntaxElement {
  private:		// Class variables.
    static AkUniqueStringTable *strings;

  protected:	// Instance variables.
    AkUniqueString *value;

  public:		// Instance methods.
    JsIdentifier(short unsigned *aName);
    virtual SyntaxCategory category(void);

    virtual bool isEqual(JsIdentifier *anIdent);
};


#endif		/* JS_IDENTIFIER_H_ */
