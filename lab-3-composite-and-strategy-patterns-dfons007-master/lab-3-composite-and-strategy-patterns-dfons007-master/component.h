#ifndef __component_h__
#define __component_h__

/*
Name: Daniel Fonseca SID: 861222722 Email: dfons007@ucr.edu Lab Section: 022
Name: Luis Alfaro SID: 861240301 Email: lalfa003@ucr.edu Lab Section: 022
CS100 Lab 1 - Composite and Strategy
*/

#include <stddef.h>
#include <cmath>

// This will be our opperand
class base {
public:


	/* constructors */
	base() {
	}

	/* pure virtual functions */
	virtual double evaluate() = 0;
};

/*
	Operand Class and Function
*/

class Op :public base
{
private:
	double data;
public:
	Op()
	{
		this->data = 0;
	}

	Op(double x)
	{
		this->data = x;
	}
	
	double evaluate() {
		return this->data;
	}
};

/*
	Add Class and Function
*/

class Add :public base
{
private:
	double data;
	base *right;
	base *left;
public:

	Add(base *leftop, base *rightop);
	
	double evaluate();
};

/*
	Sub Class and Function
*/

class Sub :public base
{
private:
		double data;
		base *right;
		base *left;
public:
	Sub(base *leftop, base *rightop);

	double evaluate();
};

/*
	Mult Class and Function
*/

class Mult :public base
{
private:
	double data;
	base *right;
	base *left;
public:
	Mult(base *leftop, base *rightop);

	double evaluate();
};

/*
	Div Class and Function
*/

class Div :public base
{
private:
	double data;
	base *right;
	base *left;
public:
	Div(base *leftop, base *rightop);

	double evaluate();
};

/*
	Square Class and Function
*/

class Sqr :public base
{
private:
	double data;
	base *right;
public:
	Sqr(base *rightop);

	double evaluate();
};
#endif // __component_h__

