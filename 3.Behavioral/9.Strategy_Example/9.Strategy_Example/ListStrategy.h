#pragma once

#include <sstream>
#include <string>

class ListStrategy {
public:
	virtual void start(std::ostringstream& oss) {}
	virtual void addListItems(std::ostringstream& oss, const std::string& item) = 0;
	virtual void end(std::ostringstream& oss) {}

};