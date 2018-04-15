#ifndef VECTORCONTAINER
#define VECTORCONTAINER

#include <vector>
#include "container.h"
#include "component.h"
#include "strategy.h"


class VectorContainer :public Container
{
private:
	std::vector<base*> myContainer;
public:
	/*
		My Constructors
	*/
	VectorContainer(base* operand)
	{
		this->sort_function = NULL;
		this->myContainer.push_back(operand);
	}

	VectorContainer(base* operand, Sort* sort)
	{
		this->sort_function = NULL;
		this->myContainer.push_back(operand);
	}

	/*
		Container Functions
	*/
	void add_element(base* operand);

	void print();
	
	/*
		Sort Function
	*/

	base* at(int i);

	void swap(int i, int j);

	int size();

	void set_sort_function(Sort* sort_type);

	void sort();
};

/*
	Function Defintions
*/

void VectorContainer::add_element(base* operand)
{
	this->myContainer.push_back(operand);
}

void VectorContainer::swap(int i, int j)
{
	iter_swap(myContainer.begin()+i, myContainer.begin() + j);
}

base* VectorContainer::at(int i)
{
	return this->myContainer[i];
}

int VectorContainer::size()
{
	return this->myContainer.size();
}

void VectorContainer::set_sort_function(Sort* sort_type)
{
	this->sort_function = sort_type;
}

void VectorContainer::sort()
{
	this->sort_function->sort(this);
}

void VectorContainer::print()
{
	base* element;
	for (auto it = this->myContainer.begin(); it != this->myContainer.end(); it++)
	{
		element = *it;
		std::cout << element->evaluate() << std::endl;
	}
}
#endif 