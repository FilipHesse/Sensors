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
        void UpdateLevels();
    protected:
    private:
        Sensors* pSensors_;
        int inButton_;
        int inCLK_;
        int inDT_;

        bool ButtonLevel;
        bool CLKLevel;
        bool DTLevel;
};

#endif // ROTARYENCODER_H
