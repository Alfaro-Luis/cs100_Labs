#ifndef ABSOLUTE_VAL_H
#define ABSOLUTE_VAL_H

#include "Decorator.h"

class AbsoluteValue :public BaseDecorator
{
public:
	AbsoluteValue(base* x);
	double evaluate();
	
};


#endif