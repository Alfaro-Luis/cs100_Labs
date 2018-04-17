#ifndef __STRATEGY_H__
#define __STRATEGY_H__

/*
	Name: Daniel Fonseca SID: 861222722 Email: dfons007@ucr.edu Lab Section: 022
	Name: Luis Alfaro SID: 861240301 Email: lalfa003@ucr.edu Lab Section: 022
	CS100 Lab 1 - Composite and Strategy
*/

class Container;

class Sort {
    public: 
        /* Constructors */
        Sort();

        /* Pure Virtual Functions */
        virtual void sort(Container* container) = 0;
};


/*
	Selection Sort Class and Functions
*/

class SelectionSort :public Sort
{
public:
	SelectionSort();
	void sort(Container* container);

};



/*
	Bubble Sort Class and Function
*/

class BubbleSort:public Sort
{
public:
	BubbleSort();
	void sort(Container* container);
};



#endif // __STRATEGY_H__
