#ifndef DECORATOR
#define DECORATOR

#include "component.h"
class BaseDecorator : public base
{
public:
	base* operand;
	BaseDecorator();
	BaseDecorator(base* x);
};

/*
	Ceiling Class
*/

class Ceiling :public BaseDecorator
{
public:
	Ceiling(base* x);
	double evaluate();
};

/*
	Absolute Value Class
*/

class AbsoluteValue :public BaseDecorator
{
public:
	AbsoluteValue();
};


/*
	Floor Class
*/
class Floor :public BaseDecorator
{
public:
	Floor();
};


#endif //DECORATOR