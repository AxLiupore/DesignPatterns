//
// Created by AxLiupore on 2023/8/25.
//

#ifndef FACTORYPATTERN__FACTORY_HPP_
#define FACTORYPATTERN__FACTORY_HPP_

#include "AbstractSmile.hpp"
#include "LionSmile.hpp"
#include "BatSmile.hpp"
#include "SheepSmile.hpp"

enum class Type : char
{
	Sheep, Lion, Bat
};

// 工厂类
class SmileFactory
{
 public:
	// 创造物品
	AbstractSmile* createSmile(Type type)
	{
		AbstractSmile* abstractSmile = nullptr;
		if (type == Type::Sheep)
		{
			abstractSmile = new SheepSmile;
		}
		else if (type == Type::Lion)
		{
			abstractSmile = new LionSmile;
		}
		else if (type == Type::Bat)
		{
			abstractSmile = new BatSmile;
		}
		return abstractSmile;
	}
};

#endif //FACTORYPATTERN__FACTORY_HPP_
