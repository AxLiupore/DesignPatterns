//
// Created by AxLiupore on 2023/8/25.
//

#ifndef FACTORYPATTERN__ABSTRACTFACTORY_HPP_
#define FACTORYPATTERN__ABSTRACTFACTORY_HPP_

#include "../thing/AbstractSmile.hpp"
#include "../thing/LionSmile.hpp"
#include "../thing/BatSmile.hpp"
#include "../thing/SheepSmile.hpp"

// 工厂类 - 父类
class AbstractFactory
{
 public:
	// 创造物品
	virtual AbstractSmile* createSmile() = 0;
	virtual ~AbstractFactory()
	{
	}
};

#endif //FACTORYPATTERN__ABSTRACTFACTORY_HPP_
