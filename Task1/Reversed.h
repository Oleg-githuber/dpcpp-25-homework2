#pragma once

#include <algorithm>
#include <string>
#include "DecoratedText.h"

class Reversed :
    public DecoratedText
{
public:
    Reversed(Text* text);
    void render(const std::string& data) const;
};

