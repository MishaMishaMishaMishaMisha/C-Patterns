#pragma once
#include "Factory.h"
#include "../Transport/Train.h"

class TrainFactory : public Factory
{
public:
	Transport* create() override
	{
		return new Train();
	}
};