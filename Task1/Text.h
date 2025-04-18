#pragma once

#include "iostream"

class Text
{
public:
	virtual void render(const std::string& data) const;
};

