#include "Decorator.h"

BaseDecorator::BaseDecorator()
{
	this->operand = NULL;
}

BaseDecorator::BaseDecorator(base * x)
{
	this->operand = x;
}

Ceiling::Ceiling(base * x)
{
	this->operand = x;
}

double Ceiling::evaluate()
{
	return ceil(this->operand->evaluate());
}
