#ifndef DECORATOR
#define DECORATOR

#include "component.h"
class BaseDecorator : public base
{
protected:
	base* operand;
public:
	BaseDecorator()
	{
		operand = NULL;
	}
	BaseDecorator(base* x)
	{
		operand = x;
	}
};

/*
	Ceiling Class
*/

class ceiling :protected BaseDecorator
{
public:
	ceiling(base* x)
	{
		this->operand = x;
	}
	
	double evaulate()
	{
		ceil(this->operand->evaluate());
	}
};

/*
	Absolute Value Class
*/

class AbsoluteValue :protected BaseDecorator
{
public:
	AbsoluteValue();
};


/*
	Floor Class
*/
class Floor :protected BaseDecorator
{
public:
	Floor();
};


#endif //DECORATOR