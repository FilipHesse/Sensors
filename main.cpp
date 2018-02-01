#include <iostream>
#include "lib/easylogging/easylogging++.h"
#include <gtest/gtest.h>

INITIALIZE_EASYLOGGINGPP

int main(int argc, char**argv)
{
    testing::InitGoogleTest(&argc, argv);
    std::cout << "Hello world!" << std::endl;


    return RUN_ALL_TESTS();
}
