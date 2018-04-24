#include <iostream>
#include "component.h"
#include "strategy.h"
#include "Decorator.h"
#include "Ceiling.h"
#include "AbsoluteValue.h"
#include "Floor.h"
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


	Op* op1 = new Op(1.5);
	Op* op2 = new Op(2.5);
	Op* op3 = new Op(3.5);
	
	/*
	Ceiling Tests
	*/
	
	double num = Ceiling(op1).evaluate();
	cout << "------------------------------------" <<endl;
	cout << "Ceiling Test (Decorator): " << endl << endl;
	cout << "Original #: " << op1->evaluate() << endl;
	cout << "Num w/ Ceiling Decorator: " << num << endl;
	
	double num2 = Ceiling(op2).evaluate();
	cout << endl;
	cout << "Original #: " << op2->evaluate() << endl;
	cout << "Num w/ Ceiling Decorator: " << num2 << endl;
	
	double num3 = Ceiling(op3).evaluate();
	cout << endl;
	cout << "Original #: " << op3->evaluate() << endl;
	cout << "Num w/ Ceiling Decorator: " << num3 << endl;
	
	Op* op6 = new Op(-4.5);
	Op* op7 = new Op(-100.89);
	Op* op8 = new Op(-398.75);
	
	cout << "------------------------------------" << endl;
	cout << "Testing AbsoluteValue (Decorator): " << endl;
	cout << endl;
	double num4 = AbsoluteValue(op6).evaluate();
	cout << "Negative #: " << op6->evaluate() << endl;
	cout << "AbsoluteValue: " << num4 << endl;
	
	cout << endl;
	double num5 = AbsoluteValue(op7).evaluate();
	cout << "Negative #: " << op7->evaluate() << endl;
	cout << "AbsoluteValue: " << num5 << endl;
	
	cout << endl;
	double num6 = AbsoluteValue(op8).evaluate();
	cout << "Negative #: " << op8->evaluate() << endl;
	cout << "AbsoluteValue: " << num6 << endl;
	
	cout << "------------------------------------" << endl;
	cout << "Testing Floor (Decorator): " << endl;
	cout << endl;
	
	double num7 = Floor(op1).evaluate();
	cout << "Original #: " << op1->evaluate() << endl;
	cout << "Floor #: " << num7 << endl;
	
	cout << endl;
	double num8 = Floor(op2).evaluate();
	cout << "Original #: " << op2->evaluate() << endl;
	cout << "Floor #: " << num8 << endl;
	
	cout << endl;
	double num9 = Floor(op3).evaluate();
	cout << "Original #: " << op3->evaluate() << endl;
	cout << "Floor #: " << num9 << endl;
	
	cout << "------------------------------------" << endl;
	cout << "Testing AbsoluteValue and Ceiling (Both Decorators): " << endl;
	double num10 = AbsoluteValue(new Ceiling(op6)).evaluate();
	cout << endl;
	cout << "Find Ceiling then AbsoluteValue: " << endl;
	cout << endl;
	cout << "Original #: " << op6->evaluate() << endl;
	cout << "Abs(Ceil()) #: " << num10 << endl;

	double num11 = AbsoluteValue(new Ceiling(op7)).evaluate();
	cout << endl;
	cout << "Original #: " << op7->evaluate() << endl;
	cout << "Abs(Ceil()) #: " << num11 << endl;
	
	double num12 = AbsoluteValue(new Ceiling(op8)).evaluate();
	cout << endl;
	cout << "Original #: " << op8->evaluate() << endl;
	cout << "Abs(Ceil()) #: " << num12 << endl;
	
	cout << "------------------------------------" << endl;
	cout << "Testing AbsoluteValue and Floor (Both Decorators): " << endl;
	cout << endl;
	cout << "Find Floor then AbsoluteValue: " << endl;
	cout << endl;
	double num13 = AbsoluteValue(new Floor(op6)).evaluate();
	cout << "Original #: " << op6->evaluate() << endl;
	cout << "Abs(Floor()) #: " << num13 << endl;
	
	cout << endl;
	double num14 = AbsoluteValue(new Floor(op7)).evaluate();
	cout << "Original #: " << op7->evaluate() << endl;
	cout << "Abs(Floor()) #: " << num14 << endl;
	
	cout << endl;
	double num15 = AbsoluteValue(new Floor(op8)).evaluate();
	cout << "Original #: " << op8->evaluate() << endl;
	cout << "Abs(Floor()) #: " << num15 << endl;


	cout << "\n" << "------------------------------------" << "\n";
	cout << "Testing all classes put together" << "\n" << "\n";
	cout << "The Ceiling of the Floor of the Absolute Value of -3.5" << "\n";
	cout << "The value that should be yielded is 3." << "\n";
	Ceiling* Test = new Ceiling(new Floor(new AbsoluteValue(new Op(-3.5))));
	cout << "Final Value: " << Test->evaluate() << "\n";

	cout << "------------------------------------" << "\n";
	cout << "Testing all classes put together" << "\n" << "\n";
	cout << "The Floor of the Absolute value of the Ceiling of -42.1" << "\n";
	cout << "The value that should be yielded is 42." << "\n";
	Floor* Test2 = new Floor(new AbsoluteValue(new Ceiling(new Op(-42.1))));
	cout << "Final Value: " << Test2->evaluate() << "\n";

	cout << "------------------------------------" << "\n";
	cout << "Testing all classes put together" << "\n" << "\n";
	cout << "The Absolute value of the Ceiling of the Floor of -23.2" << "\n";
	cout << "The value that should be yielded is 24." << "\n";
	AbsoluteValue* Test3 = new AbsoluteValue(new Ceiling(new Floor(new Op(-23.2))));
	cout << "Final Value: " << Test3->evaluate() << "\n";
};
