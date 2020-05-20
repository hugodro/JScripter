#ifndef JS_EXPRESSIONS_H_
#define JS_EXPRESSIONS_H_
/**************************************************
* File: expressions.h.
* Desc: Definition des expressions JavaScript.
* Module: AkraLog : JScripter.
* Revision: 7 novembre 1998 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include "syntaxElement.h"

class JsIdentifier;
class JsExprList;


class JsExpression : public JsSyntaxElement {
  protected:	// Instance variables.
    JsExpression *linkedExpr;

  public:		// Instance methods.
    JsExpression(void);
    virtual SyntaxCategory category(void);
    virtual void subLink(JsExpression *anExpression);
};


class JsConstantExpr : public JsExpression {
  public:
    enum ConstantType {
	ctBoolean, ctInteger, ctFloat, ctString
	, ctUnknown
    };
  protected:		// Instance variables.
    ConstantType type;
    union {
	void *bytes;
	double number;
    } value;

  public:			// Instance methods.
    JsConstantExpr(void);
    JsConstantExpr(bool aValue);
    JsConstantExpr(int aValue);
    JsConstantExpr(double aValue);
    JsConstantExpr(short unsigned *aValue);
};


class JsArrayExpr : public JsExpression {
  protected:		// Instance variables.
    JsExpression *source;
    JsExpression *index;

  public:			// Instance methods.
    JsArrayExpr(JsExpression *aSource, JsExpression *aDisp);
};


class JsFieldExpr : public JsExpression {
  protected:		// Instance variables.
    JsExpression *owner;
    JsIdentifier *field;

  public:			// Instance methods.
    JsFieldExpr(JsExpression *aContainer, JsIdentifier *anIdent);
};


class JsCallExpr : public JsExpression {
  protected:		// Instance variables.
    JsExpression *receiver;
    JsExprList *arguments;

  public:			// Instance methods.
    JsCallExpr(JsExpression *callerExpr, JsExprList *exprList);
};


class JsNewExpr : public JsCallExpr {
  protected:		// Instance variables.

  public:			// Instance methods.
    JsNewExpr(JsExpression *classExpr, JsExprList *exprList);
};


class JsOperatorExpr : public JsExpression {
  public:
    enum Operator {
	postIncr, preIncr, postDecr, preDecr, del
	, opVoid, opTypeof, posate, negate, bitnot
	, loginot, mult, div, mod, add, sub
	, lshift, rshift, rushift, lt, gt, le, ge
	, eq, ne, bitAnd, bitXor, bitIor
	, logiAnd, logiOr
	, put, multPut, divPut, modPut, addPut
	, subPut, lshiftPut, rshiftPut, rushiftPut
	, andPut, orPut, notPut
    };
  protected:		// Instance variables.
    Operator oper;
    JsExpression *left;
    JsExpression *right;

  public:			// Instance methods.
    JsOperatorExpr(Operator anOperator, JsExpression *arg1, JsExpression *arg2);
};


class JsCondExpr : public JsExpression {
  protected:		// Instance variables.
    JsExpression *test;
    JsExpression *caseTrue;
    JsExpression *caseFalse;

  public:			// Instance methods.
    JsCondExpr(JsExpression *anExpr, JsExpression *trueExpr, JsExpression *falseExpr);
};



#endif		/* JS_EXPRESSIONS_H_ */
