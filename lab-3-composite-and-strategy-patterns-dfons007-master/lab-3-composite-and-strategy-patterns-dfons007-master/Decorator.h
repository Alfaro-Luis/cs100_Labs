#ifndef DECORATOR

#define DECORATOR

#include "component.h"

class BaseDecorator : public base
{
public:
	base* operand;
	BaseDecorator() {}
	virtual double evaluate() = 0;

};


#endif //DECORATOR