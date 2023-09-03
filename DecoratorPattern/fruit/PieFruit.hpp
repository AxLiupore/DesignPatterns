//
// Created by AxLiupore on 2023/9/3.
//

#ifndef DECORATORPATTERN_FRUIT_PIEFRUIT_HPP_
#define DECORATORPATTERN_FRUIT_PIEFRUIT_HPP_

#include "DevilFruit.hpp"

// 大饼果实
class PieFruit : public DevilFruit
{
 public:
	void fight() override
	{
		m_solider->fight();
		std::cout << m_solider->getName()
				  << "吃了大饼果实, 获得大饼铠甲...!" << std::endl;
		ability();
	}

	void ability()
	{
		std::cout << "最强辅助 -- 大饼果实可以将身边事物变成大饼, 帮助自己和队友回血..." << std::endl;
	}
};

#endif //DECORATORPATTERN_FRUIT_PIEFRUIT_HPP_
