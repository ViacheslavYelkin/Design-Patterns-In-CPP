#include "MarkdownStrategy.h"

void MarkdownStrategy::addListItems(std::ostringstream& oss, const std::string& item)
{
	oss << "* " << item << '\n';
}
