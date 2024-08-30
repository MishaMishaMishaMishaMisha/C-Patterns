#pragma once
#include "Memento.h"
#include <iostream>

class TextEditor
{
private:
	std::string text;

public:
	void addText(std::string s) { text += s; }

	void showText() { std::cout << text << std::endl; }

	Memento save() { return Memento(text); }

	void restore(Memento& memento) { text = memento.get(); }
};
