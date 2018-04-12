#ifndef __component_h__
#define __component_h__

#include <stddef.h>
#include <cmath>


//This is our base class
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

	base(base *rightone, base *leftone)
	{
		this->right = rightone;
		this->left = leftone;
		this->data = evaluate();
	}

	/*My Functions*/

	/* pure virtual functions */
	virtual double evaluate() = 0;
};
// This will be our opperand
class Op :public base
{
public:
	//Constructor
	Op() {
		this->data = 0;
	}

	Op(double x)
	{
		this->data = x;
	}
	//Functions
	double evaluate() {
		return this->data;
	}
};

class Add :public base
{
public:
	Add(base *leftop, base *rightop) {
		this->right = rightop;
		this->left = leftop;
		this->data = this->left->evaluate() + this->right->evaluate();

	}
	double evaluate() {
		this->data = this->left->evaluate() + this->right->evaluate();
		return this->data;
	}

};

class Sub :public base
{
public:
	Sub(base *leftop, base *rightop) {
		this->right = rightop;
		this->left = leftop;
		this->data = this->left->evaluate() - this->right->evaluate();

	}
	double evaluate() {
		this->data = this->left->evaluate() - this->right->evaluate();
		return this->data;
	}
	
};

class Mult :public base
{
public:
	Mult(base *leftop, base *rightop) {
		this->right = rightop;
		this->left = leftop;
		this->data = this->left->evaluate() * this->right->evaluate();

	}
	double evaluate() {
		this->data = this->left->evaluate() * this->right->evaluate();
		return this->data;
	}
};

class Div :public base
{
public:
	Div(base *leftop, base *rightop) {
		this->right = rightop;
		this->left = leftop;
		this->data = this->left->evaluate() / this->right->evaluate();

	}
	double evaluate() {
		this->data = this->left->evaluate() / this->right->evaluate();
		return this->data;
	}
};

class Sqr :public base
{
public:
	Sqr(base *operand)
	{
		this->right = operand;
		this->data = sqrt(right->evaluate());
	}
	double evaluate() {
		this->data = sqrt(right->evaluate());
		return this->data;
	}
};

#endif // __component_h__
