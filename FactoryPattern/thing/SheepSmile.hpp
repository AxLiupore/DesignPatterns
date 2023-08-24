//
// Created by AxLiupore on 2023/8/25.
//

#ifndef FACTORYPATTERN__SHEEPSMILE_HPP_
#define FACTORYPATTERN__SHEEPSMILE_HPP_

#include <iostream>
#include "AbstractSmile.hpp"

class SheepSmile : public AbstractSmile
{
	void tranform() override
	{
		std::cout << "sheep" << std::endl;
	}
	void ability() override
	{
		std::cout << "shepp final" << std::endl;
	}
};

#endif //FACTORYPATTERN__SHEEPSMILE_HPP_
