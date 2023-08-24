//
// Created by AxLiupore on 2023/8/25.
//

#ifndef FACTORYPATTERN__BATSMILE_HPP_
#define FACTORYPATTERN__BATSMILE_HPP_

#include <iostream>
#include "AbstractSmile.hpp"

class BatSmile : public AbstractSmile
{
	void tranform() override
	{
		std::cout << "bat" << std::endl;
	}
	void ability() override
	{
		std::cout << "bat final" << std::endl;
	}
};

#endif //FACTORYPATTERN__BATSMILE_HPP_
