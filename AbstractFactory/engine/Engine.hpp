//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_ENGINE_ENGINE_HPP_
#define ABSTRACTFACTORY_ENGINE_ENGINE_HPP_

#include <string>

class Engine
{
 public:
	virtual std::string getEngine() = 0;
	virtual ~Engine()
	{
	}
};

#endif //ABSTRACTFACTORY_ENGINE_ENGINE_HPP_
