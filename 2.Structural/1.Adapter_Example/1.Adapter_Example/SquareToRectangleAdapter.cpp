#include "SquareToRectangleAdapter.h"
#include "Square.h"

SquareToRectangleAdapter::SquareToRectangleAdapter(Square& square)
{
    sq_ = &square;
}

int SquareToRectangleAdapter::width() const {
    return sq_->getSide();
}

int SquareToRectangleAdapter::height() const {
    return sq_->getSide();
}
