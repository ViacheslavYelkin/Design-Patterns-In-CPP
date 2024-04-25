#pragma once

#include "ListStrategy.h"

class MarkdownStrategy : public ListStrategy{
public:
	virtual void addListItems(std::ostringstream& oss, const std::string& item);

};