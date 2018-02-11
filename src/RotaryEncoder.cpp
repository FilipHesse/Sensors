#include "RotaryEncoder.h"
#include "PinManager.h"
#include <wiringPi.h>
#include "Sensors.h"
#include "easylogging++.h"

RotaryEncoder::RotaryEncoder(Sensors* pSensors)
: pSensors_ (pSensors)
, inButton_ (-1)
, inCLK_    (-1)
, inDT_     (-1)
, ButtonLevel(false)
, CLKLevel   (false)
, DTLevel    (false)
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

    inButton_ = pinManager->GetPinNumber(e_PinNames::ROTARY_ENCODER_BUTTON);
    inCLK_    = pinManager->GetPinNumber(e_PinNames::ROTARY_ENCODER_CLK);
    inDT_     = pinManager->GetPinNumber(e_PinNames::ROTARY_ENCODER_DT);
    pinMode( inButton_,  INPUT );
    pinMode( inCLK_,     INPUT );
    pinMode( inDT_,      INPUT );
       // ...und deren Pull-Up Widerstände aktiviert
    pullUpDnControl (inButton_, PUD_UP);
    pullUpDnControl (inCLK_, PUD_UP);
    pullUpDnControl (inDT_, PUD_UP);
}

void RotaryEncoder::UpdateLevels()
{
    bool inButtonTemp = digitalRead( inButton_ );
    bool inCLKTemp = digitalRead( inCLK_ );
    bool inDTTemp = digitalRead( inDT_ );

    if (inButtonTemp != inButton_)
    {
        inButton_ = inButtonTemp;
        LOG(INFO)<<"New level of button: " << inButton_;
    }
}
