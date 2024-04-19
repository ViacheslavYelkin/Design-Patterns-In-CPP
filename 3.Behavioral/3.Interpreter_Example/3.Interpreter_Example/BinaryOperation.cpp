#include "BinaryOperation.h"

int BinaryOperation::eval() const
{
    int left = lhs_->eval();
    int right = rhs_->eval();

    if (operation_type_ == EOperationType::addition) {
        return left + right;
    }
    else {
        return left - right;
    }
}
