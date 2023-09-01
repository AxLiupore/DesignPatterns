//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_WEAPON_LASERWEAPON_HPP_
#define ABSTRACTFACTORY_WEAPON_LASERWEAPON_HPP_

#include "Weapon.hpp"

class Laser : public Weapon
{
 public:
	std::string getWeapon() override
	{
		return std::string("use LaserWeapon");
	}
};

#endif //ABSTRACTFACTORY_WEAPON_LASERWEAPON_HPP_
