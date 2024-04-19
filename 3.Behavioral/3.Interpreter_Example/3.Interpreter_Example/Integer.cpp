#include "Integer.h"

Integer::Integer(int value) 
    : value_{value}
{
}

int Integer::eval() const
{
    return value_;
}
