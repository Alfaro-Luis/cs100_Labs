#include "container.h"

Container::Container(Sort * function)
{
	this->sort_function = function;
}

void Container::set_sort_function(Sort* sort_type)
{
	this->sort_function = sort_type;
}

