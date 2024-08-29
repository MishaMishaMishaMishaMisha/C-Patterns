#include "EngineBuilder.h"

EngineBuilder* EngineBuilder::setPower(int power)
{
	this->power = power;
	return this;
}

EngineBuilder* EngineBuilder::setVolume(float volume)
{
	this->volume = volume;
	return this;
}

EngineBuilder* EngineBuilder::setFuel(Engine::Fuel fuel)
{
	this->fuel = fuel;
	return this;
}

Engine* EngineBuilder::build()
{
	return new Engine(power, volume, fuel);
}