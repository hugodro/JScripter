/**************************************************
* File: interpreter.cc.
* Desc: Definition of the JsInterpreter class.
* Module: AkraLog : JScripter.
* Revision: 8 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "jscFlexer.h"
#include "fctDefinition.h"
#include "statements.h"
#include "interpreter.h"


extern int jscrparse(void);
#if defined(YYDEBUG)
extern int jscrdebug;
#endif

JscFlexer *flexer;	// TMPTMP: Fourni un flexer a lexhelp.


JsInterpreter::JsInterpreter(void)
{
    localFlexer= new JscFlexer(0);
#if defined(YYDEBUG)
    jscrdebug= 1;
#endif
    flexer= localFlexer;	// TMPTMP: Fourni un flexer a lexhelp.
}


JsInterpreter::~JsInterpreter(void)
{
// TODO.
}


int JsInterpreter::parse(char *someText)
{
    return jscrparse();
}


void JsInterpreter::execStatement(JsStatement *aStatement)
{
    int gaga;
// TODO.
    gaga= 0;
}


void JsInterpreter::addFunction(JsFunctionDef *aFunction)
{
    int gaga;
// TODO.
    gaga= 0;
}

