#ifndef _JSCFLEXER_H_
#define _JSCFLEXER_H_
/**************************************************
* File: jscFlexer.h.
* Desc: Definition of the JavaScript version of a FlexLexer.
* Module: WAO : JScripter.
* Rev: 20 mars 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include <FlexLexer.h>


class JscFlexer : public yyFlexLexer {
  public:
    JscFlexer(void *aValue);
#if defined(_WIN32)
    virtual void LexerOutput(const char* buf, int size);
#endif
    virtual int yylex();
    virtual int getLineNbr();
    virtual int getInput();
};

#endif		/* _JSCFLEXER_H_ */
