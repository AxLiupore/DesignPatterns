//
// Created by AxLiupore on 2023/8/25.
//

#ifndef FACTORYPATTERN_FACTORY_SHEEPFACTORY_HPP_
#define FACTORYPATTERN_FACTORY_SHEEPFACTORY_HPP_

#include <iostream>
#include "AbstractFactory.hpp"

class BatFactory : public AbstractFactory
{
	AbstractSmile* createSmile() override
	{
		return new BatSmile;
	}
	~BatFactory()
	{
		std::cout << "SheepFactory is destory" << std::endl;
	}
};

#endif //FACTORYPATTERN_FACTORY_SHEEPFACTORY_HPP_
