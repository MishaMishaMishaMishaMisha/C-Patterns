#include "CarBuilder.h"

CarBuilder* CarBuilder::setType(Car::CarType type)
{
	this->type = type;
	return this;
}

CarBuilder* CarBuilder::setColor(Car::CarColor color)
{
	this->color = color;
	return this;
}

CarBuilder* CarBuilder::setEngine(Engine* engine)
{
	this->engine = engine;
	return this;
}

CarBuilder* CarBuilder::setWheel(Wheel* wheel)
{
	this->wheel = wheel;
	return this;
}

Car* CarBuilder::build()
{
	return new Car(type, color, engine, wheel);
}