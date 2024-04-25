
#include "OutputFormat.h"
#include "MarkdownStrategy.h"
#include "HtmlStrategy.h"
#include "TextProcessor.h"

void TextProcessor::clear()
{
	oss_.str("");
	oss_.clear();
}

void TextProcessor::appendList(const std::vector<std::string>& items)
{
	strategy_->start(oss_);
	for (auto&& item : items) {
		strategy_->addListItems(oss_, item);
	}
	strategy_->end(oss_);
}

void TextProcessor::setOutputFormat(const OutputFormat& format)
{
	switch (format)
	{
	case OutputFormat::markdown:
		strategy_ = std::make_unique<MarkdownStrategy>();
		break;
	case OutputFormat::html:
		strategy_ = std::make_unique<HtmlStrategy>();
		break;
	}
}

std::string TextProcessor::str()
{
	return oss_.str();
}
