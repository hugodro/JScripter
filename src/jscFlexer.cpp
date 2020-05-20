/**************************************************
* File: jscFlexer.cc.
* Desc: Implementation of the SGML version of a FlexLexer.
* Module: WAO : SgmlParser.
* Rev: 20 juin 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/
#include "jscFlexer.h"


JscFlexer::JscFlexer(void *aValue)
  : yyFlexLexer()
{
// TODO.
}

#if defined(_WIN32)
void JscFlexer::LexerOutput( const char* buf, int size )
{
    // Should do an output, but we cancel from NT linking problems.
}
#endif

int JscFlexer::getLineNbr()
{
    return lineno();
}


int JscFlexer::getInput()
{
    return yyinput();
}

