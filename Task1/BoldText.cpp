#include "BoldText.h"

BoldText::BoldText(Text* text) : DecoratedText{ text }
{}

void BoldText::render(const std::string& data) const
{
	std::cout << "<b>";
	_text->render(data);
	std::cout << "</b>";
}