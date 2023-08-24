//
// Created by AxLiupore on 2023/8/25.
//

#ifndef FACTORYPATTERN__LIONSMILE_HPP_
#define FACTORYPATTERN__LIONSMILE_HPP_

#include <iostream>
#include "AbstractSmile.hpp"

class LionSmile : public AbstractSmile
{
	void tranform() override
	{
		std::cout << "变成狮子" << std::endl;
	}
	void ability() override
	{
		std::cout << "狮子大声叫" << std::endl;
	}
};

#endif //FACTORYPATTERN__LIONSMILE_HPP_
