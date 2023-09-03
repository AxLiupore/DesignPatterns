//
// Created by AxLiupore on 2023/9/3.
//

#ifndef DECORATORPATTERN_FRUIT_QUAKEFRUIT_HPP_
#define DECORATORPATTERN_FRUIT_QUAKEFRUIT_HPP_

#include "DevilFruit.hpp"

// 震震果实
class QuakeFruit : public DevilFruit
{
 public:
	void fight() override
	{
		m_solider->fight();
		std::cout << m_solider->getName()
				  << "吃了震震果实, 可以在任意空间引发震动, 摧毁目标...!" << std::endl;
	}
};

#endif //DECORATORPATTERN_FRUIT_QUAKEFRUIT_HPP_
