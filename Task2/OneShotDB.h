#pragma once

#include <map>
#include "VeryHeavyDatabase.h"

class OneShotDB :
    public VeryHeavyDatabase
{
private:
    size_t _shots{};
    VeryHeavyDatabase* _realDB;
    std::map<std::string, size_t> _cache;

public:
    explicit OneShotDB(VeryHeavyDatabase* realDB, size_t shots=1);
    std::string getData(const std::string& key);
};

