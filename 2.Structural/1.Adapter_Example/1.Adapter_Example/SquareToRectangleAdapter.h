#pragma once

#include "Rectangle.h"

class Square;

class SquareToRectangleAdapter : public Rectangle
{
public:
    SquareToRectangleAdapter(Square& square);

    virtual int width() const override;
    virtual int height() const override;

private:
    Square* sq_;

};