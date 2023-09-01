//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_WEAPON_WEAPON_HPP_
#define ABSTRACTFACTORY_WEAPON_WEAPON_HPP_

#include <string>

class Weapon
{
 public:
	virtual std::string getWeapon() = 0;
	virtual ~Weapon()
	{
	}
};

#endif //ABSTRACTFACTORY_WEAPON_WEAPON_HPP_
