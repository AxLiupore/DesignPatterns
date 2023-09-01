//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_ENGINE_NUCLEARENGINE_HPP_
#define ABSTRACTFACTORY_ENGINE_NUCLEARENGINE_HPP_

#include "Engine.hpp"

class Nuclear : public Engine
{
 public:
	std::string getEngine() override
	{
		return std::string("use NuclearEngine");
	}
};

#endif //ABSTRACTFACTORY_ENGINE_NUCLEARENGINE_HPP_
