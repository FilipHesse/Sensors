#ifndef PINMANAGER_H
#define PINMANAGER_H
#include <map>


enum class e_PinNames
{
    ROTARY_ENCODER_CLK,
    ROTARY_ENCODER_DT,
    ROTARY_ENCODER_BUTTON
};

class PinManager
{
    public:
        PinManager();
        virtual ~PinManager();
        unsigned int GetPinNumber(e_PinNames pinName) const;
    protected:
    private:
        const std::map<e_PinNames, unsigned int> pinMap_;
};


#endif // PINMANAGER_H
