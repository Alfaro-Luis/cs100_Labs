#include "Floor.h" 

Floor::Floor(base* x) {
    
    this->operand = x;
}

double Floor::evaluate() { 
    
    return floor(operand->evaluate());
}