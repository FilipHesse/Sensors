#include "RotaryEncoder.h"
#include "PinManager.h"
#include <wiringPi.h>
#include "Sensors.h"

RotaryEncoder::RotaryEncoder(Sensors* pSensors)
: pSensors_ (pSensors)
{
    //ctor
}

RotaryEncoder::~RotaryEncoder()
{
    //dtor
}

void RotaryEncoder::InitInputs()
{
    std::shared_ptr<const PinManager> pinManager = pSensors_->GetPinManager();
    pinMode( pinManager->GetPinNumber(e_PinNames::ROTARY_ENCODER_BUTTON),  INPUT );
    pinMode( pinManager->GetPinNumber(e_PinNames::ROTARY_ENCODER_CLK),     INPUT );
    pinMode( pinManager->GetPinNumber(e_PinNames::ROTARY_ENCODER_DT),      INPUT );
}
