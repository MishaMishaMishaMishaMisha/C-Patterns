#pragma once
#include <string>

class Memento
{
private:
	std::string state;

public:
	Memento(std::string state) : state(state) {}

	std::string get() { return state; }
};
