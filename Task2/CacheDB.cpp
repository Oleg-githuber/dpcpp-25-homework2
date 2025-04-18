#include "CacheDB.h"

CacheDB::CacheDB(std::unique_ptr<VeryHeavyDatabase> realDB) : _realDB{ std::move(realDB) }
{}

std::string CacheDB::getData(const std::string& key)
{
	if (_cache.find(key) == _cache.end())
	{
		std::cout << "Read from DB: ";
		_cache[key] = _realDB->getData(key);
	}
	else
	{
		std::cout << "Read from cache: ";
	}
	return _cache.at(key);
}