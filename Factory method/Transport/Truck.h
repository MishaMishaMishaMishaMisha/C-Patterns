#pragma once
#include "Transport.h"
#include <iostream>

class Truck : public Transport
{
public:
	void deliver() override { std::cout << "delivering by truck..." << std::endl; };
	int getCapacity() override { return 10; }
};