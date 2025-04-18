#include "Paragraph.h"

Paragraph::Paragraph(Text* text) : DecoratedText{ text }
{}

void Paragraph::render(const std::string& data) const
{
	std::cout << "<p>";
	_text->render(data);
	std::cout << "</p>";
}