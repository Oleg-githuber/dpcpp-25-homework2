#pragma once

#include "DecoratedText.h"

class BoldText :
    public DecoratedText
{
public:
    BoldText(Text* text);
    void render(const std::string& data) const;
};

