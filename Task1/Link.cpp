#include "Link.h"

Link::Link(Text* text) : DecoratedText{ text }
{}

void Link::render(const std::string& ref, const std::string& data) const
{
	std::cout << "<a ref=" << ref << '>';
	_text->render(data);
	std::cout << "</a>";
}