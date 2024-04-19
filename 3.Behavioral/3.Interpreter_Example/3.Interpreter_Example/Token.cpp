#include "Token.h"

Token::Token(ETokenType type, const std::string& expression)
	: type_{ type }, expression_{ expression }
{
}

ETokenType Token::getTokenType() const
{
	return type_;
}

std::string Token::getExpression() const
{
	return expression_;
}

std::ostream& operator<<(std::ostream& os, const Token& obj)
{
	os << "`" << obj.expression_ << "`";
	return os;
}
