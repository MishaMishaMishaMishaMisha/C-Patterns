#pragma once
#include "../Car Parts/Car.h"

class CarBuilder
{
public:
	CarBuilder* setType(Car::CarType type);
	CarBuilder* setColor(Car::CarColor color);
	CarBuilder* setEngine(Engine* engine);
	CarBuilder* setWheel(Wheel* wheel);
	Car* build();

private:
	// default
	Car::CarType type = Car::CarType::Sedan;
	Car::CarColor color = Car::CarColor::Black;
	Engine* engine = new Engine(100, 2.0, Engine::Fuel::Pertol);
	Wheel* wheel = new Wheel(Wheel::Material::Steel, 20);
};