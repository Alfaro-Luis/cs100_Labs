#ifndef __STRATEGY_H__
#define __STRATEGY_H__

/*
	Name: Daniel Fonseca SID: 861222722 Email: dfons007@ucr.edu Lab Section: 022
	Name: Luis Alfaro SID: 861240301 Email: lalfa003@ucr.edu Lab Section: 022
	CS100 Lab 1 - Composite and Strategy
*/

#include "container.h"
#include "component.h"

class Sort {
    public: 
        /* Constructors */
        Sort();

        /* Pure Virtual Functions */
        virtual void sort(Container* container) = 0;
};

Sort::Sort()
{

}

/*
	Selection Sort Class and Functions
*/

class SelectionSort :public Sort
{
public:
	SelectionSort();
	void sort(Container* container);

};

SelectionSort::SelectionSort()
{
}

void SelectionSort::sort(Container* container)
{
	for (int i = 0; i < container->size() - 1; i++)
	{
		int minindex = i;
		for (int j = i + 1; j < container->size(); j++)
		{
			if (container->at(j)->evaluate() < container->at(minindex)->evaluate())
				minindex = j;
		}
		container->swap(i,minindex);
	}

}

/*
	Bubble Sort Class and Function
*/

class BubbleSort:public Sort
{
public:
	BubbleSort();
	void sort(Container* container);
};

BubbleSort::BubbleSort()
{
}

void BubbleSort::sort(Container* container)
{
	for (int i = 0; i < container->size() - 1; i++)
	{
		for (int j = 0; j < container->size() - i - 1; j++)
		{
			if (container->at(j)->evaluate() > container->at(j + 1)->evaluate())
				container->swap(j, j + 1);
		}
	}
}


#endif // __STRATEGY_H__
