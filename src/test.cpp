/**************************************************
* File: test.cc.
* Desc: module qui utilise 'JsInterpreter' pour faire des tests..
* Module: AkraLog : JsScripter.
* Rev: 8 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include <stdio.h>
#include "interpreter.h"

extern "C" {
/* MOD-MSC: Extrait les definitions precedentes. */
extern FILE *yyin;
}


JsInterpreter *interpreter;

main(int argc, char **argv)
{
    int  result= 0;

    interpreter= new JsInterpreter();
    result= interpreter->parse(NULL);		// TMP: On ne passe rien au parse, il lit stdin.

    printf("parse a donne %d.\n", result);
}
