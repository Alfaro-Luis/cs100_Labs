#ifndef CEILING_H
#define CEILING_H

#include "Decorator.h"
#include <math.h>

using namespace std;


class Ceiling : public BaseDecorator {
    
public:
	Ceiling(base* x);
	double evaluate();
	
private: 
    base* operand;
};


#endif