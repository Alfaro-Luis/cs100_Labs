#include "strategy.h"
#include "container.h"
Sort::Sort()
{

}

/*
	Bubble Sort
*/
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

/*
	Selection Sort
*/

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
		container->swap(i, minindex);
	}

}