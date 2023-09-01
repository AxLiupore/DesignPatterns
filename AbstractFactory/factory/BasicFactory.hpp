//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_FACTORY_BASICFACTORY_HPP_
#define ABSTRACTFACTORY_FACTORY_BASICFACTORY_HPP_

#include "AbstractFactory.hpp"

class BasicFactory : public AbstractFactory
{
 public:
	Ship* createShip() override
	{
		Ship* ship = new Ship(new WoodBody, new Human, new Gun);
		std::cout << "BasicFactory" << std::endl;
		return ship;
	}

};

#endif //ABSTRACTFACTORY_FACTORY_BASICFACTORY_HPP_
