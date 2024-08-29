#include "Engine.h"
#include <iostream>


Engine::Engine(int power, float volume, Engine::Fuel fuel)
{
	this->power = power;
	this->volume = volume;
	this->fuel = fuel;
}

void Engine::showEngine()
{
	std::cout << "Engine: power=" << power << "; volume=" << volume << "; type fuel=" << fuel << std::endl;
}
