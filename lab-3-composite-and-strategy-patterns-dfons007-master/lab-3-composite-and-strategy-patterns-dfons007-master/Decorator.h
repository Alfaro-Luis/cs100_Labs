#ifndef DECORATOR
#define DECORATOR

#include "Component.h"
class BaseDecorator : public base
{
public:
	BaseDecorator();

};

class ceiling :public BaseDecorator
{
public:


};

class AbsoluteValue :public BaseDecorator
{
public:

};

class Floor :public BaseDecorator
{
public:

};


#endif // DECORATOR