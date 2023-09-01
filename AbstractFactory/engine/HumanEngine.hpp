//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_ENGINE_HUMANENGINE_HPP_
#define ABSTRACTFACTORY_ENGINE_HUMANENGINE_HPP_

#include "Engine.hpp"

class Human : public Engine
{
 public:
	std::string getEngine() override
	{
		return std::string("use HumanEngine");
	}
};

#endif //ABSTRACTFACTORY_ENGINE_HUMANENGINE_HPP_
