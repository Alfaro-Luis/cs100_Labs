#ifndef DECORATOR
#define DECORATOR

#include "component.h"

class BaseDecorator : public base
{
public:

	virtual double evaluate() = 0;
	
private: 
	base* operand;
};


#endif //DECORATOR