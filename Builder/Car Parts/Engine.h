#pragma once

class Engine
{
public:
	enum Fuel {Pertol, Diesel, Electric};

	Engine(int power, float volume, Fuel fuel);

	void showEngine();

private:
	int power;
	float volume;
	Fuel fuel;
};