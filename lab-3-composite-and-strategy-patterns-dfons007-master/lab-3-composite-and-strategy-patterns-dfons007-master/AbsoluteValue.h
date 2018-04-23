#ifndef ABSOLUTE_VAL_H
#define ABSOLUTE_VAL_H

#include "Decorator.h"

using namespace std;

class AbsoluteValue :public BaseDecorator
{
public:
	AbsoluteValue(base*);
	double evaluate();
	
private: 
    base* operand;
};


#endif