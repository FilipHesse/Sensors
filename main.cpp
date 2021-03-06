#include <iostream>
#include "lib/easylogging/easylogging++.h"
#include <gtest/gtest.h>
#include "Sensors.h"
#include <chrono>
#include <thread>

INITIALIZE_EASYLOGGINGPP

int main(int argc, char**argv)
{
    // Initializing Google Test
    testing::InitGoogleTest(&argc, argv);

    // Try Out logging
    LOG(INFO) << "My Log hello world";

    // Actual main code
    Sensors sensors;
    sensors.InitializeAllSensors();

    for(;;)
    {
        sensors.UpdateLevels();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    return RUN_ALL_TESTS();
}
