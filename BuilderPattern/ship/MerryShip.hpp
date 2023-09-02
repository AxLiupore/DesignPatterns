//
// Created by AxLiupore on 2023/9/2.
//

#ifndef BUILDERMODEL_SHIP_MERRYSHIP_HPP_
#define BUILDERMODEL_SHIP_MERRYSHIP_HPP_

#include <iostream>
#include <string>
#include <map>

class MerryShip
{
 public:
	void assemble(std::string name, std::string parts)
	{
		m_parts.insert(std::make_pair(parts, name));
	}

	void showParts()
	{
		for (const auto& item : m_parts)
		{
			std::cout << item.first << ":" << item.second << std::endl;
		}
	}

 private:
	std::map<std::string, std::string> m_parts;
};

#endif //BUILDERMODEL_SHIP_MERRYSHIP_HPP_
