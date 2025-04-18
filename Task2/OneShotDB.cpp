#include "OneShotDB.h"

OneShotDB::OneShotDB(VeryHeavyDatabase* realDB, size_t shots) : _realDB{ realDB }, _shots{ shots }
{}

std::string OneShotDB::getData(const std::string& key)
{
	if (_cache.find(key) == _cache.end())
	{
		_cache[key] = _shots - 1;
		return _realDB->getData(key);
	}
	else
	{
		if (_cache.at(key) > 0)
		{
			--_cache[key];
			return _realDB->getData(key);
		}
		else
		{
			return "error";
		}
	}
}