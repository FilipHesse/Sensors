#include "PinManager.h"
#include "easylogging++.h"

PinManager::PinManager()
: pinMap_{{e_PinNames::ROTARY_ENCODER_CLK,5},{e_PinNames::ROTARY_ENCODER_DT,4},{e_PinNames::ROTARY_ENCODER_BUTTON,1}}
{
    //ctor
}

PinManager::~PinManager()
{
    //dtor
}

unsigned int PinManager::GetPinNumber(e_PinNames pinName) const
{
    auto it = pinMap_.find( pinName );
    if(it != pinMap_.end()){
        return it->second;
    }
    else{
        LOG(FATAL)<<"Pin with Name" <<static_cast<int>(pinName)<<"not configured";
    }

}

