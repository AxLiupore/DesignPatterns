//
// Created by axliu on 23-9-10.
//

#ifndef CHAINPATTERN_MANAGER_HPP
#define CHAINPATTERN_MANAGER_HPP

#include "AbstractManager.hpp"

class Manager : public AbstractManager
{
public:
	void handleRequest(RequestType type) override
	{
		if (type == RequestType::QingJia)
		{
			std::cout << "请假: 同意请假，好好休息~~~" << std::endl;
		}
		else if (type == RequestType::ZhangXin)
		{
			std::cout << "涨薪: 这个我得请示一下咱们CEO..." << " ====> ";
			m_next->handleRequest(type);
		}
		else if (type == RequestType::CiZhi)
		{
			std::cout << "辞职: 我给你向上级反应一下..." << " ====> ";
			m_next->handleRequest(type);
		}
		else
		{
		}
	}
};

#endif //CHAINPATTERN_MANAGER_HPP
