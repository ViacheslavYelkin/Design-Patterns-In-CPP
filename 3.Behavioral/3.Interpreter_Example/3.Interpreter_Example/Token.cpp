#include "Token.h"

Token::Token(ETokenType type, const std::string& expression)
	: type_{ type }, expression_{ expression }
{
}

std::ostream& operator<<(std::ostream& os, const Token& obj)
{
	os << "`" << obj.expression_ << "`";
	return os;
}
