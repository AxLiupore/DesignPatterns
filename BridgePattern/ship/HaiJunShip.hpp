//
// Created by AxLiupore on 2023/9/3.
//

#ifndef BRIDGEPATTERN_SHIP_HAIJUNSHIP_HPP_
#define BRIDGEPATTERN_SHIP_HAIJUNSHIP_HPP_

#include "AbstrachShip.hpp"

class HaiJunShip : public AbstractShip
{
 public:
	using AbstractShip::AbstractShip;
	std::string getName() override
	{
		return "HaiJunShip";
	}
	void feature() override
	{
		std::cout << getName() << "--evil" << std::endl;
	}
};

#endif //BRIDGEPATTERN_SHIP_HAIJUNSHIP_HPP_
