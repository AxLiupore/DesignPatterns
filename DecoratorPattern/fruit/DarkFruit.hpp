//
// Created by AxLiupore on 2023/9/3.
//

#ifndef DECORATORPATTERN_FRUIT_DARKFRUIT_HPP_
#define DECORATORPATTERN_FRUIT_DARKFRUIT_HPP_

#include "DevilFruit.hpp"

class DarkFruit : public DevilFruit
{
 public:
	void fight() override
	{
		m_solider->fight();
		// 使用恶魔果实战斗
		std::cout << m_solider->getName()
				  << "吃了暗暗果实, 可以拥有黑洞一样的无限吸引力..." << std::endl;
		warning();
	}

 private:
	void warning()
	{
		std::cout << m_solider->getName()
				  << "你要注意: 吃了暗暗果实, 身体元素化之后不能躲避攻击，会吸收所有伤害!" << std::endl;
	}
};

#endif //DECORATORPATTERN_FRUIT_DARKFRUIT_HPP_
