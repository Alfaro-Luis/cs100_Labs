#include "AbsoluteValue.h"

AbsoluteValue::AbsoluteValue(base* x) {
    
    this->operand = x;
}

double AbsoluteValue::evaluate() {
    return abs(operand->evaluate());
}