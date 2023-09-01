//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_ENGINE_DIESELENGINE_HPP_
#define ABSTRACTFACTORY_ENGINE_DIESELENGINE_HPP_

#include "Engine.hpp"

class Diesel : public Engine
{
 public:
	std::string getEngine() override
	{
		return std::string("use DieselEngine");
	}
};

#endif //ABSTRACTFACTORY_ENGINE_DIESELENGINE_HPP_
