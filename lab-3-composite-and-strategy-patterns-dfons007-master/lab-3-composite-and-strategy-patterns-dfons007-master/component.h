#ifndef __component_h__
#define __component_h__

#include <stddef.h>
#include <cmath>
#include <string>
#include <sstream>
// This will be our opperand
class Op
{
public:
	std::string data;
	Op *left;
	Op *right;

	Op(char data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}

	std::string checkdata()
	{
		return this->data;
	}

	
};

class Mult :public Op
{
public:
	int mult()
	{
		std::string l, r;
		l = this->left->checkdata();
		r = this->right->checkdata();
		int leftop = std::stoi(l);
		int rightop = std::stoi(r);
		return leftop * rightop;
	}
};

class Div :public Op
{
public:
	double div()
	{
		std::string l, r;
		l = this->left->checkdata();
		r = this->right->checkdata();
		int leftop = std::stoi(l);
		int rightop = std::stoi(r);
		return leftop / rightop;
	}

};

class Add :public Op
{
public:
	double add()
	{
		std::string l, r;
		l = this->left->checkdata();
		r = this->right->checkdata();
		int leftop = std::stoi(l);
		int rightop = std::stoi(r);
		return leftop + rightop;
	}
};

class Sub :public Op
{
public:
	double sub()
	{
		std::string l, r;
		l = this->left->checkdata();
		r = this->right->checkdata();
		int leftop = std::stoi(l);
		int rightop = std::stoi(r);
		return leftop - rightop;
	}

};

class Sqr :public Op
{
public:
	double sqr() 
	{
		std::string l, r;
		l = this->left->checkdata();
		r = this->right->checkdata();
		int leftop = std::stoi(l);
		int rightop = std::stoi(r);
		return leftop * rightop;
	}
};

// Is this our Tree???
class base {
    public:

        /* constructors */
        base() {}

		/*My Functions*/
		bool amOp(char opCheck);
		double performop();
        /* pure virtual functions */
        virtual double evaluate() = 0;
};

#endif // __component_h__

bool base::amOp(char opCheck)
{
	if (opCheck == '*' || opCheck == '+' || opCheck == '-' || opCheck == '/' || opCheck == '^')
	{
		return true;
	}
	return false;
}

double base::performop()
{

}