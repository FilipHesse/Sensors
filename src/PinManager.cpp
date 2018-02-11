#include "PinManager.h"
#include "easylogging++.h"

PinManager::PinManager()
: pinMap_{{e_PinNames::ROTARY_ENCODER_CLK,24},{e_PinNames::ROTARY_ENCODER_DT,23},{e_PinNames::ROTARY_ENCODER_BUTTON,18}}
{
    //ctor
}

PinManager::~PinManager()
{
    //dtor
}

unsigned int PinManager::GetPinNumber(e_PinNames pinName)
{
    auto it = pinMap_.find( pinName );
    if(it != pinMap_.end()){
        return it->second;
    }
    else{
        LOG(FATAL)<<"Pin with Name" <<to_chars(pinName)<<"not configured";
    }

}
