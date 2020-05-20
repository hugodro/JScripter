#ifndef JS_INTERPRETER_H_
#define JS_INTERPRETER_H_
/**************************************************
* File: interpreter.h.
* Desc: Definition of the JsInterpreter class.
* Module: AkraLog : JScripter.
* Revision: 7 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include <akra/AkObject.h>
#include <akra/portableDefs.h>


class JsStatement;
class JsFunctionDef;
class JscFlexer;


class JsInterpreter : public AkObject {
  protected:		// Instance variables.
    JscFlexer *localFlexer;

  public:		// Instance methods.
    JsInterpreter(void);
    virtual ~JsInterpreter(void);

    virtual int parse(char *someText);	// Does a parse.

    virtual void execStatement(JsStatement *aStatement);
    virtual void addFunction(JsFunctionDef *aFunction);
};


#endif		/* JS_INTERPRETER_H_ */


