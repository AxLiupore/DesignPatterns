#include <iostream>
#include "factory/AbstractFactory.hpp"
#include "factory/SheepFactory.hpp"
#include "factory/LionFactory.hpp"

int main()
{
	AbstractFactory* factory = new SheepFactory;
	auto smile = factory->createSmile();
	smile->tranform();
	smile->ability();
	delete factory;
	delete smile;
	return 0;
}
