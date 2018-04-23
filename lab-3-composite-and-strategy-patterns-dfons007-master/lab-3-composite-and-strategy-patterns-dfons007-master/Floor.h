#ifndef FLOOR_H
#define FLOOR_H

#include "Decorator.h" 

using namespace std;

class Floor :public BaseDecorator
{
public:
	Floor(base*);
	double evaluate();
	
private: 
    base* operand;
};

#endif