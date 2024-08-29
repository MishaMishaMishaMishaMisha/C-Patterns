#include <iostream>
#include "Car Parts Builder/CarBuilder.h"
#include "Car Parts Builder/EngineBuilder.h"
#include "Car Parts Builder/WheelBuilder.h"



int main()
{
	
	CarBuilder* carBuilder = new CarBuilder;
	EngineBuilder* engineBuilder = new EngineBuilder;
	WheelBuilder* wheelBuilder = new WheelBuilder;

	Car* car = carBuilder
		->setColor(Car::CarColor::White)
		->setType(Car::CarType::Hatchback)
		->setEngine(engineBuilder
			->setPower(200)
			->setVolume(1.5)
			->setFuel(Engine::Fuel::Diesel)
			->build())
		->setWheel(wheelBuilder
			->setDiameter(14)
			->setMaterial(Wheel::Material::Alloy)
			->build())
		->build();

	car->showCar();

	delete wheelBuilder;
	delete engineBuilder;
	delete carBuilder;
	delete car;


	return 0;
}