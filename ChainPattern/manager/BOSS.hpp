//
// Created by axliu on 23-9-10.
//

#ifndef CHAINPATTERN_BOSS_HPP
#define CHAINPATTERN_BOSS_HPP

#include "AbstractManager.hpp"

class BOSS : public AbstractManager
{
public:
	void handleRequest(RequestType type) override
	{
		if (type == RequestType::QingJia)
		{
			std::cout << "请假: 只有工作才能实现人生价值，回去好好坚守岗位！！！" << std::endl;
		}
		else if (type == RequestType::ZhangXin)
		{
			std::cout << "涨薪: 钱财乃身外之物, 要视其如粪土!!!" << std::endl;
		}
		else if (type == RequestType::CiZhi)
		{
			std::cout << "辞职: 巴洛克工作社就是你的家, 这次把你留下, 下次别再提了!!!" << std::endl;
		}
		else
		{
		}
	}
};

#endif //CHAINPATTERN_BOSS_HPP
