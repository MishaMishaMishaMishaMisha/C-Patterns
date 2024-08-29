#include "Car.h"
#include <iostream>

Car::Car(CarType type, CarColor color, Engine* engine, Wheel* wheel)
{
	this->type = type;
	this->color = color;
	this->engine = engine;
	this->wheel = wheel;
}

void Car::showCar()
{
	std::cout << "Car: type=" << type << "; color=" << color << std::endl;
	engine->showEngine();
	wheel->showWheel();
}