#pragma once

#include "DecoratedText.h"

class ItalicText :
    public DecoratedText
{
public:
    ItalicText(Text* text);
    void render(const std::string& data) const;
};

