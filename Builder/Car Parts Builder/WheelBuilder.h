#pragma once
#include "../Car Parts/Wheel.h"

class WheelBuilder
{
public:
	WheelBuilder* setMaterial(Wheel::Material material);
	WheelBuilder* setDiameter(int diameter);
	Wheel* build();

private:
	// default
	Wheel::Material material = Wheel::Material::Steel;
	int diameter = 20;
};