//
// Created by AxLiupore on 2023/9/3.
//

#ifndef COMPOSITEPATTERN_TEAM_MANAGERTEAM_HPP_
#define COMPOSITEPATTERN_TEAM_MANAGERTEAM_HPP_

#include <list>
#include "AbstractTeam.hpp"

class ManagerTeam : public AbstractTeam
{
 public:
	using AbstractTeam::AbstractTeam;
	void fight() override
	{
		std::cout << m_name + "和黑胡子的恶魔果实能力者战斗!!!" << std::endl;
	}
	void addChild(AbstractTeam* node) override
	{
		node->setParent(this);
		m_children.push_back(node);
	}
	void removeChild(AbstractTeam* node) override
	{
		node->setParent(nullptr);
		m_children.remove(node);
	}
	void display() override
	{
		std::string info = std::string();
		for (const auto item : m_children)
		{
			if (item == m_children.back())
			{
				info += item->getName();
			}
			else
			{
				// 优先级: + > +=
				info += item->getName() + ", ";
			}
		}
		std::cout << m_name + "的船队是【" << info << "】" << std::endl;
	}
	std::list<AbstractTeam*> getChildren()
	{
		return m_children;
	}
	bool hasChild() override
	{
		return true;
	}
	~ManagerTeam()
	{
		std::cout << "我是" << m_name
				  << ", 战斗已经结束, 拜拜..." << std::endl;
	}

 private:
	std::list<AbstractTeam*> m_children;
};

#endif //COMPOSITEPATTERN_TEAM_MANAGERTEAM_HPP_
