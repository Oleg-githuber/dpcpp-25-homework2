#pragma once

#include <map>
#include <memory>
#include "VeryHeavyDatabase.h"

class CacheDB :
    public VeryHeavyDatabase
{
private:
    std::map<std::string, std::string> _cache;
    std::unique_ptr<VeryHeavyDatabase> _realDB;

public:
    CacheDB(std::unique_ptr<VeryHeavyDatabase> realDB);
    std::string getData(const std::string& key);
};

