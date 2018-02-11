#include "Sensors.h"
#include <wiringPi.h>
#include "RotaryEncoder.h"
#include "easylogging++.h"
#include "PinManager.h"

Sensors::Sensors()
:   pinManager_(std::make_shared<PinManager>())
,   rotaryEncoder_(std::make_shared<RotaryEncoder>(this))
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

void Sensors::UpdateLevels()
{

}


std::shared_ptr<const PinManager> Sensors::GetPinManager()
{
    return pinManager_;
}
