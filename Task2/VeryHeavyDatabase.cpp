#include "VeryHeavyDatabase.h"

std::string VeryHeavyDatabase::getData(const std::string& key) const noexcept
{
	return std::string("Very big data string: ") + key;
}