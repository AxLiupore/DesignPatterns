//
// Created by AxLiupore on 2023/9/2.
//

#ifndef PROTOTYPEPATTERN_PATTERN_GERMASOLIDER_HPP_
#define PROTOTYPEPATTERN_PATTERN_GERMASOLIDER_HPP_

#include <string>

class GermaSolider
{
 public:
	virtual GermaSolider* clone() = 0;
	virtual std::string whoAmI() = 0;
	virtual ~GermaSolider()
	{
	}
};

#endif //PROTOTYPEPATTERN_PATTERN_GERMASOLIDER_HPP_
