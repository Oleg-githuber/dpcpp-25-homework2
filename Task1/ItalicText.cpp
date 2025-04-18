#include "ItalicText.h"

ItalicText::ItalicText(Text* text) : DecoratedText{text}
{}

void ItalicText::render(const std::string& data) const
{
	std::cout << "<i>";
	_text->render(data);
	std::cout << "</i>";
}