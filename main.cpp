#include <iostream>
#include "lib/easylogging/easylogging++.h"
#include <gtest/gtest.h>
#include "Sensors.h"

INITIALIZE_EASYLOGGINGPP

int main(int argc, char**argv)
{
    testing::InitGoogleTest(&argc, argv);
    std::cout << "Hello world!" << std::endl;
    LOG(INFO) << "My Log hello world";
    Sensors sensors;
    sensors.

    return RUN_ALL_TESTS();
}
