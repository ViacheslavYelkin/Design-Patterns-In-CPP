#pragma once

#include "Element.h"

class Integer : public Element {
public:
	Integer(int value);

	virtual int eval() const override;

	int value_{};
};