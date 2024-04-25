#include <iostream>
#include <vector>
#include <string>

#include "OutputFormat.h"
#include "TextProcessor.h"

int main(int argc, char** argv) {

	std::vector <std::string> items{"item1", "item2", "item3"};

	TextProcessor tp{};
	tp.setOutputFormat(OutputFormat::markdown);
	tp.appendList(items);

	std::cout << tp.str() << '\n';
	tp.clear();

	tp.setOutputFormat(OutputFormat::html);
	tp.appendList(items);
	
	std::cout << tp.str() << '\n';

	return EXIT_SUCCESS;
}