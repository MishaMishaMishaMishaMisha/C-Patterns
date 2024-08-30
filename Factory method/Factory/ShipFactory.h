#pragma once
#include "Factory.h"
#include "../Transport/Ship.h"

class ShipFactory : public Factory
{
public:
	Transport* create() override
	{
		return new Ship();
	}
};