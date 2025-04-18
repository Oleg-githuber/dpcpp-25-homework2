#pragma once

#include <iostream>

class VeryHeavyDatabase
{
public:
	std::string getData(const std::string& key) const noexcept;
};

