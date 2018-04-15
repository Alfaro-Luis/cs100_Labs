#ifndef LISTCONTAINER
#define LISTCONTAINER

#include <list>
#include <iostream>
#include "container.h"
#include "component.h"
class ListContainer :public Container
{
private:
	std::list<base*> myListContainer;
public:
	/*
		Constructors
	*/
	ListContainer(base* operand)
	{
		this->myListContainer.push_back(operand);
	}
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

void ListContainer::add_element(base* operand)
{
	this->myListContainer.push_back(operand);
}

base* ListContainer::at(int i)
{
	base* temp;
	std::list<base*>::iterator it;
	it = this->myListContainer.begin();
	std::advance(it, i);
	temp = *it;
	return temp;
}
void ListContainer::swap(int i, int j)
{
	std::list<base*>::iterator it, itj;
	it = myListContainer.begin();
	itj = myListContainer.begin();
	std::advance(it, i);
	std::advance(itj,j);
	iter_swap(it, itj);
}

void ListContainer::print()
{
	base* element;
	for (auto it = this->myListContainer.begin(); it != this->myListContainer.end(); it++)
	{
		element = *it;
		std::cout << element->evaluate() << "\n";
	}
}

int ListContainer::size()
{
	return this->myListContainer.size();
}

void ListContainer::set_sort_function(Sort* sort_type)
{
	this->sort_function = sort_type;
}

void ListContainer::sort()
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
		std::cout << "Sort Function is null. Please set a sort function." << "\n" << "\n";
	}
}
#endif 
