#include <iostream>

#include "Wall.h"

Wall::Wall()
{
	std::cout << "----------------------\nCreating simple wall\n";
}

void Wall::Enter()
{
}

Wall* Wall::Clone() const
{
	return new Wall(*this);
}
