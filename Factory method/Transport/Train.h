#pragma once
#include "Transport.h"
#include <iostream>

class Train : public Transport
{
public:
	void deliver() override { std::cout << "delivering by train..." << std::endl; };
	int getCapacity() override { return 50; }
};