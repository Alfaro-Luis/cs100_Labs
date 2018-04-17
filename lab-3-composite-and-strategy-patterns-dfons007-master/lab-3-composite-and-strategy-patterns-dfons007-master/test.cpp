#include <iostream>
#include "component.h"
#include "strategy.h"
#include "VectorContainer.h"
#include "ListContainer.h"

/*
	Name: Daniel Fonseca SID: 861222722 Email: dfons007@ucr.edu Lab Section: 022 
	Name: Luis Alfaro SID: 861240301 Email: lalfa003@ucr.edu Lab Section: 022
	CS100 Lab 1 - Composite and Strategy
*/

using namespace std;

int main() {

	Op* op5 = new Op(10);
	Op* op4 = new Op(12);
	Op* op12 = new Op(14);
	Op* op13 = new Op(10);
	cout << "Component Tests: Add, Mult, Div, Sqr" << endl;
	Add* C = new Add(op5, op4); 
	cout << op5->evaluate() << " + " << op4->evaluate() << " = " << C->evaluate() << "\n";
	Mult* D = new Mult(C, op4); 
	cout << C->evaluate() << " * " << op4->evaluate() << " = " << D->evaluate() <<"\n";
	Div* E = new Div(C, D); 
	cout << C->evaluate() << " / " << D->evaluate() << " = " << E->evaluate() << "\n";
	Sqr* F = new Sqr(op5);
	cout << op5->evaluate() << "^2 = " << F->evaluate() << "\n";
	




	
	VectorContainer* container = new VectorContainer(D);
	ListContainer* listcontainer = new ListContainer(D);

	container->set_sort_function(new SelectionSort());
	container->add_element(C);
	container->add_element(op5);
	container->add_element(op4);
	container->add_element(op12);
	container->add_element(op13);

	cout << "\n" << "Vector Container Selection sort" << "\n" << "\n";

	cout << "Before Sort" << "\n" << "\n";
	container->print();
	container->sort();
	cout << "\n" << "After Sort" << "\n" << "\n";
	container->print();

	cout << "\n" << "List Container Bubble sort" << "\n" << "\n";

	
	listcontainer->set_sort_function(new BubbleSort());
	listcontainer->add_element(C);
	listcontainer->add_element(op5);
	listcontainer->add_element(op4);
	listcontainer->add_element(op12);
	listcontainer->add_element(op13);

	cout << "Before Sort" << "\n" << "\n";
	listcontainer->print();
	listcontainer->sort();
	cout << "\n" << "After Sort" << "\n" << "\n";
	listcontainer->print();

	

};
