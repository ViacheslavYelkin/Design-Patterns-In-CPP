#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <exception>

#include "Token.h"
#include "ETokenType.h"
#include "Element.h"
#include "Integer.h"
#include "EOperationType.h"
#include "BinaryOperation.h"

int parse(const std::vector<Token>& tokens) {
	int result{};
	std::unique_ptr<BinaryOperation> evaluator = std::make_unique<BinaryOperation>();
	bool have_lhs{ false };

	for (size_t i{}; i < tokens.size(); i++) {
		const Token& token = tokens[i];
		switch (token.getTokenType())
		{
		case ETokenType::integer: {
			int value = stoi(token.getExpression());
			std::shared_ptr<Integer> integer = std::make_shared<Integer>(value);
			if (!have_lhs) {
				evaluator->lhs_ = integer;
				have_lhs = true;
			}
			else {
				evaluator->rhs_ = integer;
				integer->value_ = evaluator->eval();
				evaluator->lhs_ = integer;
			}
			break;
		}
		case ETokenType::plus:
			evaluator->operation_type_ = EOperationType::addition;
			break;
		case ETokenType::minus:
			evaluator->operation_type_ = EOperationType::subtraction;
			break;
		default:
			break;
		}
	}

	result = evaluator->lhs_->eval();

	return result;
}

int main(int argc, char** argv) {

	std::string input{"1+2+3-4+1"};

	std::vector<Token> tokens = Token::lex(input);

	for (const Token& t : tokens) {
		std::cout << t << " ";
	}

	try {
		auto parsed = parse(tokens);
		std::cout << input << " = " << parsed << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return EXIT_SUCCESS;
}