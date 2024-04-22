#include <iostream>


#include "List.h"

int main(int argc, char** argv) {

	Node<int>* root = new Node<int>(1);

	List<int> ls(root);

	ls.add(new Node<int>(2));
	ls.add(new Node<int>(3));
	ls.add(new Node<int>(4));


	List<int>::iterator it = ls.begin();

	for (; it != ls.end(); ++it) {
		std::cout << it->value_ << " ";
	}

	return EXIT_SUCCESS;
}