//
// Created by axliu on 23-9-7.
//

#ifndef FACADEPATTERN_CANNON_HPP
#define FACADEPATTERN_CANNON_HPP

#include <iostream>

class Cannon
{
public:
	void cannonFire()
	{
		std::cout << "狮吼炮正在向目标开火..." << std::endl;
	}
};

#endif //FACADEPATTERN_CANNON_HPP
