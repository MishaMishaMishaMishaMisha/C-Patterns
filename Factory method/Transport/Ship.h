#pragma once
#include "Transport.h"
#include <iostream>

class Ship : public Transport
{
public:
	void deliver() override { std::cout << "delivering by ship..." << std::endl; };
	int getCapacity() override { return 80; }
};