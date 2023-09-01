//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_FACTORY_STANDARDFACTORY_HPP_
#define ABSTRACTFACTORY_FACTORY_STANDARDFACTORY_HPP_

#include "AbstractFactory.hpp"

class StandardFactory : public AbstractFactory
{
 public:
	Ship* createShip() override
	{
		Ship* ship = new Ship(new MetalBody, new Diesel, new Cannon);
		std::cout << "StandardFactory" << std::endl;
		return ship;
	}

};

#endif //ABSTRACTFACTORY_FACTORY_STANDARDFACTORY_HPP_
