// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "CacheDB.h"
#include "OneShotDB.h"

int main()
{
    try
    {
        std::unique_ptr<CacheDB> cacheDB = std::make_unique<CacheDB>(std::make_unique<VeryHeavyDatabase>());
        std::cout << cacheDB->getData("first") << std::endl;
        std::cout << cacheDB->getData("first") << std::endl;
        std::cout << cacheDB->getData("second") << std::endl;

        std::cout << std::endl;

        VeryHeavyDatabase* vhdb;
        std::unique_ptr<OneShotDB> oneShot = std::make_unique<OneShotDB>(vhdb, 2);
        std::cout << oneShot->getData("first") << std::endl;
        std::cout << oneShot->getData("first") << std::endl;
        std::cout << oneShot->getData("first") << std::endl;
    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what();
    }
    

    return EXIT_SUCCESS;
}

