//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_WEAPON_GUNWEAPON_HPP_
#define ABSTRACTFACTORY_WEAPON_GUNWEAPON_HPP_

#include "Weapon.hpp"

class Gun : public Weapon
{
 public:
	std::string getWeapon() override
	{
		return std::string("use GunWeapon");
	}
};

#endif //ABSTRACTFACTORY_WEAPON_GUNWEAPON_HPP_
