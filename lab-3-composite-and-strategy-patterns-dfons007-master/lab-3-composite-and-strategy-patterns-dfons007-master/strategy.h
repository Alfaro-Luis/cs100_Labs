#ifndef __STRATEGY_H__
#define __STRATEGY_H__

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
		std::cout << "Swapping" << container->at(i)->evaluate() << " and " << container->at(minindex)->evaluate() << std::endl;
		container->swap(i,minindex);
	}

}


class BubbleSort :public Sort
{
public:

};


#endif // __STRATEGY_H__
