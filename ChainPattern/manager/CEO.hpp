//
// Created by axliu on 23-9-10.
//

#ifndef CHAINPATTERN_CEO_HPP
#define CHAINPATTERN_CEO_HPP

#include "AbstractManager.hpp"

class CEO : public AbstractManager
{
public:
	void handleRequest(RequestType type) override
	{
		if (type == RequestType::QingJia)
		{
			std::cout << "请假: 同意请假, 下不为例..." << std::endl;
		}
		else if (type == RequestType::ZhangXin)
		{
			std::cout << "涨薪: 你工资不少了, 给你个购物券吧..." << std::endl;
		}
		else if (type == RequestType::CiZhi)
		{
			std::cout << "辞职: 这个我得问问咱们老板..." << " ====> ";
			m_next->handleRequest(type);
		}
		else
		{
		}
	}
};

#endif //CHAINPATTERN_CEO_HPP
