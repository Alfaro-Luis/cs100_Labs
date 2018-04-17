#ifndef VECTORCONTAINER
#define VECTORCONTAINER

/*
	Name: Daniel Fonseca SID: 861222722 Email: dfons007@ucr.edu Lab Section: 022
	Name: Luis Alfaro SID: 861240301 Email: lalfa003@ucr.edu Lab Section: 022
	CS100 Lab 1 - Composite and Strategy
*/

#include <vector>
#include "component.h"
#include "container.h"


class VectorContainer :public Container
{
private:
	std::vector<base*> myContainer;
public:
	/*
		My Constructors
	*/
	VectorContainer(base* operand);

	VectorContainer(base* operand, Sort* sort);

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

#endif 