#include "Sensors.h"
#include <wiringPi.h>
#include "RotaryEncoder.h"
#include "easylogging++.h"

Sensors::Sensors()
:   rotaryEncoder_(std::make_shared<RotaryEncoder>())
{

}

Sensors::~Sensors()
{
    //dtor
}


void Sensors::InitializeAllSensors()
{
    if (wiringPiSetup() == -1)
    {
        LOG(FATAL)<<"WiringPiSetup went wrong - maybe your IDE is not running with sudo";
    }

    rotaryEncoder_->InitInputs();
}
