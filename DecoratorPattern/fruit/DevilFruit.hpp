//
// Created by AxLiupore on 2023/9/3.
//

#ifndef DECORATORPATTERN_SOLIDER_DEVILFRUIT_HPP_
#define DECORATORPATTERN_SOLIDER_DEVILFRUIT_HPP_

#include "../Solider/Solider.hpp"

// 恶魔果实基类
class DevilFruit : public Solider
{
 public:
	void enchantment(Solider* solider)
	{
		m_solider = solider;
		m_name = solider->getName();
	}

 protected:
	Solider* m_solider = nullptr;
};

#endif //DECORATORPATTERN_SOLIDER_DEVILFRUIT_HPP_
