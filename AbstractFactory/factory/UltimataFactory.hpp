//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_FACTORY_ULTIMATAFACTORY_HPP_
#define ABSTRACTFACTORY_FACTORY_ULTIMATAFACTORY_HPP_

#include "AbstractFactory.hpp"

class UltimataFactory : public AbstractFactory
{
 public:
	Ship* createShip() override
	{
		Ship* ship = new Ship(new IronBody, new Nuclear, new Laser);
		std::cout << "UltimataFactory" << std::endl;
		return ship;
	}

};

#endif //ABSTRACTFACTORY_FACTORY_ULTIMATAFACTORY_HPP_
