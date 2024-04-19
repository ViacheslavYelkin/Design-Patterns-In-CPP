#include <iostream>
#include <string>
#include <vector>

#include "Token.h"
#include "ETokenType.h"

int main(int argc, char** argv) {

	std::string input{"1+3+4-2"};

	std::vector<Token> tokens = Token::lex(input);

	for (const Token& t : tokens) {
		std::cout << t << " ";
	}

	return EXIT_SUCCESS;
}