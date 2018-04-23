#ifndef CEILING_H
#define CEILING_H

#include "Decorator.h"

class Ceiling : public BaseDecorator {
    
public:
	Ceiling(base* x);
	double evaluate();
	
private: 
    base* operand;
};


#endif