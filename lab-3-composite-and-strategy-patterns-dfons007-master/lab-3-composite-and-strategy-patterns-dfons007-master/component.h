#ifndef __component_h__
#define __component_h__

#include <stddef.h>
#include <cmath>

// This will be our opperand
class base {
public:
	double data;
	base *right;
	base *left;

	/* constructors */
	base() {
		this->data = 0;
		this->right = NULL;
		this->left = NULL;
	}

	/* pure virtual functions */
	virtual double evaluate() = 0;
};

/*
	Operand Class and Function
*/

class Op :public base
{
public:
	Op()
	{
		this->data = 0;
	}
	Op(double x)
	{
		this->data = x;
		this->right = NULL;
		this->left = NULL;
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
public:
	Add(base *rightop, base *leftop)
	{
		this->right = rightop;
		this->left = leftop;
		this->data = this->left->evaluate() + this->right->evaluate();
	}
	
	double evaluate()
	{
		this->data = this->left->evaluate() + this->right->evaluate();
		return this->data;
	}
};

/*
	Sub Class and Function
*/

class Sub :public base
{
public:
	Sub(base *rightop, base *leftop)
	{
		this->right = rightop;
		this->left = leftop;
		this->data = this->left->evaluate() - this->right->evaluate();
	}

	double evaluate()
	{
		this->data = this->left->evaluate() - this->right->evaluate();
		return this->data;
	}
};

/*
	Mult Class and Function
*/

class Mult :public base
{
public:
	Mult(base *rightop, base *leftop)
	{
		this->right = rightop;
		this->left = leftop;
		this->data = this->left->evaluate() * this->right->evaluate();
	}

	double evaluate()
	{
		this->data = this->left->evaluate() * this->right->evaluate();
		return this->data;
	}
};

/*
	Div Class and Function
*/

class Div :public base
{
public:
	Div(base *rightop, base *leftop)
	{
		this->right = rightop;
		this->left = leftop;
		this->data = this->left->evaluate() / this->right->evaluate();
	}

	double evaluate()
	{
		this->data = this->left->evaluate() / this->right->evaluate();
		return this->data;
	}
};

/*
	Square Class and Function
*/

class Sqr :public base
{
public:
	Sqr(base *rightop)
	{
		this->right = rightop;
		this->left = NULL;
		this->data = pow(right->evaluate(), double(2));
	}

	double evaluate()
	{
		this->data = sqrt(right->evaluate());
		return 	this->data;
	}
};
#endif // __component_h__

