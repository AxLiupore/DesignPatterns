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
		std::cout << "变成蝙蝠" << std::endl;
	}
	void ability() override
	{
		std::cout << "蝙蝠回声" << std::endl;
	}
};

#endif //FACTORYPATTERN__BATSMILE_HPP_
