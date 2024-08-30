#include "MobilePhone.h"
#include <iostream>

void MobilePhone::pluginCharger(MicroUSBCharger* charger)
{
    this->charger = charger;
    std::cout << "plugin micro usb charger!" << std::endl;
}

void MobilePhone::unplugCharger()
{
    std::cout << "unplug charger!" << std::endl;
    this->charger = nullptr;
}

void MobilePhone::charge(int time)
{
    if (!charger)
    {
        std::cout << "Please, plugin micro usb charger" << std::endl;
        return;
    }

    float timeH = time / 9.0f;
    float power = charger->getOutputAmperage() * charger->getOutputVoltage();
    int percent = chargingPercent + (int)(power * timeH);
    chargingPercent = std::min(percent, 100);
}

void MobilePhone::make_call(int minutes)
{
    minutes /= 2; // every minute of call take 0.5% charging
    if (chargingPercent < minutes) {
        std::cout << "Charge mobile phone!" << std::endl;
        return;
    }

    chargingPercent -= minutes;
    std::cout << "Calling..." << std::endl;
}

void MobilePhone::playGame(int minutes)
{
    minutes *= 2; // every minute of playing game take 2% charging
    if (chargingPercent < minutes) {
        std::cout << "Charge mobile phone!" << std::endl;
        return;
    }

    chargingPercent -= minutes;
    std::cout << "Playing..." << std::endl;
}

void MobilePhone::getChargingPercent()
{
    std::cout << "percents left=" << chargingPercent << "%\n";
    //return chargingPercent;
}