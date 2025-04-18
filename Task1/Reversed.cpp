#include "Reversed.h"

Reversed::Reversed(Text* text) : DecoratedText{ text }
{}

void Reversed::render(const std::string& data) const
{
	std::string str1{ data };
	std::reverse(str1.begin(), str1.end());
	const std::string str2{ str1 };
	_text->render(str2);
}