#include "WheelBuilder.h"


WheelBuilder* WheelBuilder::setMaterial(Wheel::Material material)
{
	this->material = material;
	return this;
}

WheelBuilder* WheelBuilder::setDiameter(int diameter)
{
	this->diameter = diameter;
	return this;
}

Wheel* WheelBuilder::build()
{
	return new Wheel(material, diameter);
}

