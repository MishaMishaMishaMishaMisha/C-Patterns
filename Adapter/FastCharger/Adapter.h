#pragma once
#include "TypeCCharger.h"
#include "../MobilePhone/MobilePhone.h"

class Adapter : public MicroUSBCharger
{
private:
    TypeCCharger* charger = nullptr;

public:
    Adapter(TypeCCharger* charger) : charger(charger) {}

    float getOutputVoltage() override
    {
        return convertPowerToVoltage(charger->getPower());
    }
    float getOutputAmperage() override
    {
        return convertPowerToAmperage(charger->getPower());
    }

    float convertPowerToVoltage(float power)
    {
        return 0.5 * power;
    }
    float convertPowerToAmperage(float power)
    {
        return 0.2 * power;
    }
};