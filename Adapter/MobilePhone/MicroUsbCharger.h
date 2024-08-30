#pragma once

class MicroUSBCharger
{
public:
	virtual float getOutputVoltage() = 0;
	virtual float getOutputAmperage() = 0;
	virtual ~MicroUSBCharger() = default;
};