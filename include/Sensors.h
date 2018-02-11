#ifndef SENSORS_H
#define SENSORS_H
#include <memory>

class PinManager;
class RotaryEncoder;
class Sensors
{
    public:
        Sensors();
        void InitializeAllSensors();
        virtual ~Sensors();
        void UpdateLevels();
        std::shared_ptr<const PinManager> GetPinManager();
    protected:
    private:
        std::shared_ptr<const PinManager>  pinManager_;
        std::shared_ptr<RotaryEncoder> rotaryEncoder_;
};

#endif // SENSORS_H
