#ifndef DECORATOR
#define DECORATOR

#include "component.h"
class BaseDecorator : public base
{
public:
	BaseDecorator();
};

/*
	Ceiling Class
*/

class ceiling :public BaseDecorator
{
public:
	ceiling();
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