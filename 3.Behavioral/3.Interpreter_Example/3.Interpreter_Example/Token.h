#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "ETokenType.h"


class Token {

	friend std::ostream& operator<< (std::ostream& os, const Token& obj);

public:

	Token(ETokenType type, const std::string& expression);

	static std::vector<Token> lex(const std::string& input) {
		std::vector <Token> result{};

		for (size_t i{}; i <= input.size(); i++) {
			switch (input[i]) {
			case '+':
				result.push_back(Token{ETokenType::plus, "+"});
 				break;
			case '-':
				result.push_back(Token{ETokenType::minus, "-"});
				break;
			default:
				std::ostringstream buffer;
				buffer << input[i];
				for (size_t j{ i + 1 }; j <= input.size(); j++) {
					if (isdigit(input[j])) {
						buffer << input[j];
						++i;
					}
					else {
						result.push_back(Token{ ETokenType::integer, buffer.str() });
						break;
					}
				}
			}
		}

		return result;
	}

private:
	ETokenType type_{};
	std::string expression_{};
};