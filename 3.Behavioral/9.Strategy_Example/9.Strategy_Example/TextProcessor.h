#pragma once

#include <vector>
#include <sstream>
#include <memory>

#include "ListStrategy.h"

enum class OutputFormat;

class TextProcessor {
public:

	void clear();
	void appendList(const std::vector<std::string>& items);
	void setOutputFormat(const OutputFormat& format);
	std::string str();
private:
	std::ostringstream oss_{};
	std::unique_ptr<ListStrategy> strategy_{};
};