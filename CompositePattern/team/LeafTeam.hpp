//
// Created by AxLiupore on 2023/9/3.
//

#ifndef COMPOSITEPATTERN_TEAM_LEAFTEAM_HPP_
#define COMPOSITEPATTERN_TEAM_LEAFTEAM_HPP_

#include "AbstractTeam.hpp"

// 叶子节点类
class LeafTeam : public AbstractTeam
{
 public:
	using AbstractTeam::AbstractTeam;
	void fight() override
	{
		std::cout << m_parent->getName() + m_name + "与黑胡子的船员进行近距离肉搏战..." << std::endl;
	}
	void display() override
	{
		std::cout << "我是" << m_parent->getName() << "下属的" << m_name << std::endl;
	}
	~LeafTeam()
	{
		std::cout << "我是" << m_parent->getName() << "下属的" << m_name
				  << ", 战斗已经结束, 拜拜..." << std::endl;
	}
};

#endif //COMPOSITEPATTERN_TEAM_LEAFTEAM_HPP_
