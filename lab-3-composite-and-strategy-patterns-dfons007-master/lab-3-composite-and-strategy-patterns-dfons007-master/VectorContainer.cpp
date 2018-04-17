#include "VectorContainer.h"
#include "strategy.h"
#include <iostream>
/*
Function Defintions
*/

VectorContainer::VectorContainer(base * operand)
{
	this->sort_function = NULL;
	this->myContainer.push_back(operand);
}

VectorContainer::VectorContainer(base * operand, Sort * sort)
{
	this->sort_function = NULL;
	this->myContainer.push_back(operand);
}

void VectorContainer::add_element(base* operand)
{
	this->myContainer.push_back(operand);
}

void VectorContainer::swap(int i, int j)
{
	iter_swap(myContainer.begin() + i, myContainer.begin() + j);
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
	try {

		if (this->sort_function == NULL)
		{
			throw sort_function;
		}
		else {
			this->sort_function->sort(this);
		}
	}
	catch (...) {
		std::cout << "Sort Function is null. Please set a sort function." << "\n";
	}
}

void VectorContainer::print()
{
	base* element;
	for (auto it = this->myContainer.begin(); it != this->myContainer.end(); it++)
	{
		element = *it;
		std::cout << element->evaluate() << "\n";
	}
}