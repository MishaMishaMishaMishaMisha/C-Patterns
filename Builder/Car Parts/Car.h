#pragma once
#include "Engine.h"
#include "Wheel.h"

class Car
{
public:
	enum CarColor {White, Black, Red, Grey};
	enum CarType {Sedan, Hatchback, SUV};

	Car(CarType type, CarColor color, Engine* engine, Wheel* wheel);
	void showCar();

private:
	CarType type;
	CarColor color;
	Engine* engine;
	Wheel* wheel;
};