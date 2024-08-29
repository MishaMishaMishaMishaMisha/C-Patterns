#pragma once
#include "../Car Parts/Engine.h"

class EngineBuilder
{
public:
	EngineBuilder* setPower(int power);
	EngineBuilder* setVolume(float volume);
	EngineBuilder* setFuel(Engine::Fuel fuel);
	Engine* build();

private:
	// default
	int power = 100;
	float volume = 2.0;
	Engine::Fuel fuel = Engine::Fuel::Pertol;
};