#pragma once
#include "MicroUsbCharger.h"

class ConcreteMicroUSBCharger : public MicroUSBCharger
{
private:
	float voltage;
	float amperage;

public:
	ConcreteMicroUSBCharger(float v, float a) : voltage(v), amperage(a) {}
	float getOutputVoltage() override { return voltage; }
	float getOutputAmperage() override { return amperage; }
};