#include "Ceiling.h" 


Ceiling::Ceiling(base* x) {
    
    this->operand = x;
    
}

double Ceiling::evaluate() {
    
    return ceil(operand->evaluate());
}