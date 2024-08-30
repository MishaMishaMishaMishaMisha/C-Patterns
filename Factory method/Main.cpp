#include "Includer.h"
#include <iostream>

int main()
{
	
	Transport* transport = nullptr;
	Factory* factory = nullptr;

	int choice = 0;
	std::cout << "Choose transport:" << std::endl;
	std::cout << "1. Truck" << std::endl;
	std::cout << "2. Train" << std::endl;
	std::cout << "3. Ship" << std::endl;
	std::cout << "Enter: ";
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		factory = new TruckFactory;
		break;

	case 2:
		factory = new TrainFactory;
		break;

	case 3:
		factory = new ShipFactory;
		break;
	}

	if (factory)
	{
		transport = factory->create();
		transport->deliver();
	}


	delete factory;
	delete transport;

	return 0;
}