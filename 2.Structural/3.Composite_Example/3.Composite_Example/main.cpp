#include <iostream>

#include "GraphicObject.h"
#include "Group.h"
#include "Circle.h"
#include "Square.h"

int main(int argc, char** argv) {
	
	Group* group1 = new Group("root");
	Group* group2 = new Group("sub");

	group1->add(new Circle());
	group1->add(new Square());
	group1->add(new Circle());
	group1->add(group2);

	group1->draw();
	group1->move();

	return EXIT_SUCCESS;
}