#ifndef ROTARYENCODER_H
#define ROTARYENCODER_H
#include <memory>

class Sensors;
class RotaryEncoder
{
    public:
        RotaryEncoder(Sensors*);
        virtual ~RotaryEncoder();
        void InitInputs();
    protected:
    private:
        Sensors* pSensors_;
};

#endif // ROTARYENCODER_H
