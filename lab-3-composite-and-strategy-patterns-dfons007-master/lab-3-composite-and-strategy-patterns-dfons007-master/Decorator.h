#ifndef DECORATOR
#define DECORATOR

#include "component.h"
#include <math.h>

using namespace std;


class BaseDecorator : public base
{
public:

	virtual double evaluate() = 0;
	
private: 
	base* operand;
};


#endif //DECORATOR