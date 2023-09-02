//
// Created by AxLiupore on 2023/9/2.
//

#ifndef PROTOTYPEPATTERN_PATTERN_SOLIDER2_HPP_
#define PROTOTYPEPATTERN_PATTERN_SOLIDER2_HPP_

#include <iostream>
#include "GermaSolider.hpp"

class Solider2 : public GermaSolider
{
 public:
	// 克隆当前子类的实例
	GermaSolider* clone() override
	{
		return new Solider2(*this);
	}

	std::string whoAmI() override
	{
		return "I am solider2's son";
	}
};

#endif //PROTOTYPEPATTERN_PATTERN_SOLIDER2_HPP_
