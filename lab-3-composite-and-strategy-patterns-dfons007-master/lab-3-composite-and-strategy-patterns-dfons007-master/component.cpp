#include "component.h"

Add::Add(base * leftop, base * rightop)
{
	this->right = rightop;
	this->left = leftop;
	this->data = this->left->evaluate() + this->right->evaluate();
}

double Add::evaluate()
{
	return this->data;
}

Sub::Sub(base * leftop, base * rightop)
{
	this->right = rightop;
	this->left = leftop;
	this->data = this->left->evaluate() - this->right->evaluate();
}

double Sub::evaluate()
{
	return this->data;
}

Mult::Mult(base * leftop, base * rightop)
{
	this->right = rightop;
	this->left = leftop;
	this->data = this->left->evaluate() * this->right->evaluate();
}

double Mult::evaluate()
{
	return this->data;
}

Div::Div(base * leftop, base * rightop)
{
	this->right = rightop;
	this->left = leftop;
	this->data = this->left->evaluate() / this->right->evaluate();
}

double Div::evaluate()
{
	return this->data;
}

Sqr::Sqr(base * rightop)
{
	this->right = rightop;
	this->data = pow(right->evaluate(), double(2));
}

double Sqr::evaluate()
{
	return 	this->data;
}
