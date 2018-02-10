#ifndef SENSORS_H
#define SENSORS_H
#include <memory>

class RotaryEncoder;
class Sensors
{
    public:
        Sensors();
        void InitializeAllSensors();
        virtual ~Sensors();
        void UpdateLevels();
    protected:
    private:
        std::shared_ptr<RotaryEncoder> rotaryEncoder_;
};

#endif // SENSORS_H
