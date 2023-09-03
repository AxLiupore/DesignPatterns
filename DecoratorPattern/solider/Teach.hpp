//
// Created by AxLiupore on 2023/9/3.
//

#ifndef DECORATORPATTERN_SOLIDER_TEACH_HPP_
#define DECORATORPATTERN_SOLIDER_TEACH_HPP_

#include "Solider.hpp"

class Teach : public Solider
{
 public:
	using Solider::Solider;
	void fight() override
	{
		std::cout << m_name << "依靠惊人的力量和高超的体术战斗..." << std::endl;
	}
};

#endif //DECORATORPATTERN_SOLIDER_TEACH_HPP_
