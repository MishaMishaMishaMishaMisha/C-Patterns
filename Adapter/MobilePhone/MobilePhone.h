#pragma once
#include "MicroUsbCharger.h"

class MobilePhone
{
private:
    int chargingPercent = 20;
    MicroUSBCharger* charger = nullptr;

public:
    void pluginCharger(MicroUSBCharger* charger);

    void unplugCharger();

    void charge(int time);

    void make_call(int minutes);

    void playGame(int minutes);

    void getChargingPercent();
};