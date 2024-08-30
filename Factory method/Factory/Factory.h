#pragma once
#include "../Transport/Transport.h"

class Factory
{
public:
	virtual Transport* create() = 0;
	virtual ~Factory() = default;
};