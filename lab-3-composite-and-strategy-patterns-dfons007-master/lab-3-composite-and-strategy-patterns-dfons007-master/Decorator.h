#ifndef DECORATOR
#define DECORATOR

#include "component.h"

using namespace std;


class BaseDecorator : public base
{
public:

	virtual double evaluate() = 0;
	
private: 
	base* operand;
};



// /*
// 	Absolute Value Class
// */

// class AbsoluteValue :public BaseDecorator
// {
// public:
// 	AbsoluteValue(base*);
// };


// /*
// 	Floor Class
// */
// class Floor :public BaseDecorator
// {
// public:
// 	Floor(base*);
// };


#endif //DECORATOR