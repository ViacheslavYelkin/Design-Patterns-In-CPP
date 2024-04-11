#pragma once

#include "Rectangle.h"

class Square;

struct SquareToRectangleAdapter : Rectangle
{
    SquareToRectangleAdapter(Square& square);

    virtual int width() const override;
    virtual int height() const override;

private:
    Square* sq_;

};