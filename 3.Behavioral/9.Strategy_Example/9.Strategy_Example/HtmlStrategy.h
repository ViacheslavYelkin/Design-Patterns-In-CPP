#pragma once

#include "ListStrategy.h"

class HtmlStrategy : public ListStrategy {
	virtual void start(std::ostringstream& oss);
	virtual void addListItems(std::ostringstream& oss, const std::string& item);
	virtual void end(std::ostringstream& oss);
};