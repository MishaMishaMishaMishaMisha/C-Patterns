#include "Wheel.h"
#include <iostream>

Wheel::Wheel(Wheel::Material material, int diameter)
{
	this->material = material;
	this->diameter = diameter;
}

void Wheel::showWheel()
{
	std::cout << "Wheel: material type=" << material << "; diameter=" << diameter << std::endl;
}