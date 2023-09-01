//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_FACTORY_ABSTRACTFACTORY_HPP_
#define ABSTRACTFACTORY_FACTORY_ABSTRACTFACTORY_HPP_

#include <iostream>
#include "../ship/Ship.hpp"
#include "../body/IronBody.hpp"
#include "../body/MetalBody.hpp"
#include "../body/WoodBody.hpp"
#include "../engine/DieselEngine.hpp"
#include "../engine/HumanEngine.hpp"
#include "../engine/NuclearEngine.hpp"
#include "../weapon/Cannon.hpp"
#include "../weapon/GunWeapon.hpp"
#include "../weapon/LaserWeapon.hpp"

class AbstractFactory
{
 public:
	virtual Ship* createShip() = 0;
	virtual ~AbstractFactory()
	{
	}
};

#endif //ABSTRACTFACTORY_FACTORY_ABSTRACTFACTORY_HPP_
