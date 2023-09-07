//
// Created by axliu on 23-9-7.
//

#ifndef FLYWEIGHTPATTERN_BOMBBODYFACTORY_HPP
#define FLYWEIGHTPATTERN_BOMBBODYFACTORY_HPP

#include <map>
#include "../body/FlyWeightBody.hpp"
#include "../body/SharedBombBody.hpp"

// 享元工厂类
class BombBodyFactory
{
public:
	// 参数就是炸弹的型号
	FlyWeightBody* getSharedData(const std::string& name)
	{
		FlyWeightBody* data = nullptr;
		for (const auto& item: m_bodyMap)
		{
			if (item.first == name)
			{
				// 找到了
				data = item.second;
				std::cout << "正在复用 <" << name << ">..." << std::endl;
				break;
			}
		}
		if (data == nullptr)
		{
			data = new SharedBombBody(name);
			std::cout << "正在创建 <" << name << ">..." << std::endl;
			m_bodyMap.insert(std::make_pair(name, data));
		}
		return data;
	}

	~BombBodyFactory()
	{
		for (const auto& item: m_bodyMap)
		{
			delete item.second;
		}
	}

private:
	std::map<std::string, FlyWeightBody*> m_bodyMap;
};

#endif //FLYWEIGHTPATTERN_BOMBBODYFACTORY_HPP
