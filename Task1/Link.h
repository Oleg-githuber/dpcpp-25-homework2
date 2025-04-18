#pragma once

#include "DecoratedText.h"

class Link :
    public DecoratedText
{
public:
    Link(Text* text);
    void render(const std::string& ref, const std::string& data) const;
};

