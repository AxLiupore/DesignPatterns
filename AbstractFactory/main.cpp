#include <iostream>
#include "factory/AbstractFactory.hpp"
#include "factory/UltimataFactory.hpp"
#include "ship/Ship.hpp"

int main()
{
	AbstractFactory* factory = new UltimataFactory;
	Ship* ship = factory->createShip();
	std::cout << ship->getProperty() << std::endl;
	delete ship;
	delete factory;
	return 0;
}
