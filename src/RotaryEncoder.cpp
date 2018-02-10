#include "RotaryEncoder.h"
#include "PinManager.h"

RotaryEncoder::RotaryEncoder()
{
    //ctor
}

RotaryEncoder::~RotaryEncoder()
{
    //dtor
}

void RotaryEncoder::InitInputs()
{
    pinMode( PinManager::GetPinNumber(e_PinNames::ROTARY_ENCODER_BUTTON),  INPUT );
    pinMode( PinManager::GetPinNumber(e_PinNames::ROTARY_ENCODER_CLK),     INPUT );
    pinMode( PinManager::GetPinNumber(e_PinNames::ROTARY_ENCODER_DT),      INPUT );
}
