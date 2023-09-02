//
// Created by AxLiupore on 2023/9/2.
//

#ifndef PROTOTYPEPATTERN_PATTERN_SOLIDER1_HPP_
#define PROTOTYPEPATTERN_PATTERN_SOLIDER1_HPP_

#include <iostream>
#include "GermaSolider.hpp"

class Solider1 : public GermaSolider
{
 public:
	// 克隆当前子类的实例
	GermaSolider* clone() override
	{
		// 默认时浅拷贝
		return new Solider1(*this);
	}

	std::string whoAmI() override
	{
		return "I am solider1's son";
	}
};

#endif //PROTOTYPEPATTERN_PATTERN_SOLIDER1_HPP_
