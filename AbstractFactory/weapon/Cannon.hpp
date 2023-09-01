//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_WEAPON_CANNON_HPP_
#define ABSTRACTFACTORY_WEAPON_CANNON_HPP_

#include "Weapon.hpp"

class Cannon : public Weapon
{
 public:
	std::string getWeapon() override
	{
		return std::string("use CannonWeapon");
	}
};

#endif //ABSTRACTFACTORY_WEAPON_CANNON_HPP_
