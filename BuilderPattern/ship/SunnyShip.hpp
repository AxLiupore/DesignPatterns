//
// Created by AxLiupore on 2023/9/2.
//

#ifndef BUILDERMODEL_SHIP_SUNNYSHIP_HPP_
#define BUILDERMODEL_SHIP_SUNNYSHIP_HPP_

#include <iostream>
#include <vector>
#include <string>

// 存储已经建造好的零部件
class SunnyShip
{
 public:
	void addParts(std::string name)
	{
		// 将零部件保存到容器中
		m_parts.push_back(name);
	}

	void showParts()
	{
		for (const auto& item : m_parts)
		{
			std::cout << item << " ";
		}
		std::cout << std::endl;
	}

 private:
	std::vector<std::string> m_parts;
};

#endif //BUILDERMODEL_SHIP_SUNNYSHIP_HPP_
