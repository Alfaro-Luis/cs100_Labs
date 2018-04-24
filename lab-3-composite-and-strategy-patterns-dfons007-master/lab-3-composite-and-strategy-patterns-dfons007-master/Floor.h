#ifndef FLOOR_H
#define FLOOR_H

#include "Decorator.h" 

class Floor :public BaseDecorator
{
public:
	Floor(base* x);
	double evaluate();
	
};

#endif