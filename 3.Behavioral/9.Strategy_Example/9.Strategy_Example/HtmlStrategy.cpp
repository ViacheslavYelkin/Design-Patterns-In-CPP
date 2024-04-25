#include "HtmlStrategy.h"

void HtmlStrategy::start(std::ostringstream& oss)
{
	oss << "<ul>\n";
}

void HtmlStrategy::addListItems(std::ostringstream& oss, const std::string& item)
{
	oss << "  <li>" << item << "</li>\n";
}

void HtmlStrategy::end(std::ostringstream& oss)
{
	oss << "</ul>\n";
}
