//
// Created by axliu on 23-9-10.
//

#ifndef CHAINPATTERN_DACONGMING_HPP
#define CHAINPATTERN_DACONGMING_HPP

#include "../manager/AbstractManager.hpp"

class DaoCongMing
{
public:
	void request(RequestType type, AbstractManager* manager)
	{
		manager->handleRequest(type);
	}
};

#endif //CHAINPATTERN_DACONGMING_HPP
