#include <iostream>
#include "director/Director.hpp"
#include "builder/SunnyBuilder.hpp"
#include "builder/MerryBuilder.hpp"

void buildSunnyShip()
{
	Director* director = new Director;
	SunnyBuilder* builder = new SunnyBuilder;
	director->setBuilder(builder);

	// simple
	director->buildSimpleShip();
	SunnyShip* ship = builder->getSunnyShip();
	ship->showParts();
	delete ship;

	// standard
	builder->reset();
	director->buildStandardShip();
	ship = builder->getSunnyShip();
	ship->showParts();
	delete ship;

	// regal
	builder->reset();
	director->buildRegalShip();
	ship = builder->getSunnyShip();
	ship->showParts();
	delete ship;

	delete builder;
	delete director;
}

void buildMerryShip()
{
	Director* director = new Director;
	MerryBuilder* builder = new MerryBuilder;
	director->setBuilder(builder);

	// simple
	director->buildSimpleShip();
	MerryShip* ship = builder->getMerryShip();
	ship->showParts();
	delete ship;

	// standard
	builder->reset();
	director->buildStandardShip();
	ship = builder->getMerryShip();
	ship->showParts();
	delete ship;

	// regal
	builder->reset();
	director->buildRegalShip();
	ship = builder->getMerryShip();
	ship->showParts();
	delete ship;

	delete builder;
	delete director;
}

int main()
{
	buildMerryShip();
	std::cout << "------------" << std::endl;
	buildSunnyShip();
	return 0;
}
