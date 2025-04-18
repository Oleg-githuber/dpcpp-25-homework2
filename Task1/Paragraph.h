#pragma once

#include "DecoratedText.h"

class Paragraph :
    public DecoratedText
{
public:
    Paragraph(Text* text);
    void render(const std::string& data) const;
};

