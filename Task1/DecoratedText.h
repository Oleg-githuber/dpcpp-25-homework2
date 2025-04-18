#pragma once

#include "Text.h"

class DecoratedText :
    public Text
{
public:
    Text* _text;
    DecoratedText(Text* text);
};

