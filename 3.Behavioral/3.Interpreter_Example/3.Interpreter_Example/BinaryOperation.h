#pragma once

#include <memory>

#include "Element.h"
#include "EOperationType.h"

class BinaryOperation : Element {
public:

	virtual int eval() const override;

private:
	EOperationType operation_type_;
	std::shared_ptr<Element> lhs_, rhs_;
};