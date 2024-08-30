#pragma once
#include "Factory.h"
#include "../Transport/Truck.h"

class TruckFactory : public Factory
{
public:
	Transport* create() override
	{
		return new Truck();
	}
};