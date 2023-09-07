//
// Created by axliu on 23-9-7.
//

#ifndef FACADEPATTERN_AIMLOCKSYSTEM_HPP
#define FACADEPATTERN_AIMLOCKSYSTEM_HPP

#include <iostream>

class AimLockSystem
{
public:
	void aimLock()
	{
		std::cout << "已经瞄准并且锁定了目标..." << std::endl;
	}
};

#endif //FACADEPATTERN_AIMLOCKSYSTEM_HPP
