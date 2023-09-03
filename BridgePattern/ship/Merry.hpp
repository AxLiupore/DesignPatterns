//
// Created by AxLiupore on 2023/9/3.
//

#ifndef BRIDGEPATTERN_SHIP_MERRY_HPP_
#define BRIDGEPATTERN_SHIP_MERRY_HPP_

#include "AbstrachShip.hpp"

class Merry : public AbstractShip
{
 public:
	using AbstractShip::AbstractShip;
	std::string getName() override
	{
		return "Merry";
	}
	void feature() override
	{
		std::cout << getName() << "--is justice" << std::endl;
	}
};

#endif //BRIDGEPATTERN_SHIP_MERRY_HPP_
