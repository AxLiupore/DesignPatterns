//
// Created by AxLiupore on 2023/9/3.
//

#ifndef COMPOSITEPATTERN_TEAM_ABSTRACTTEAM_HPP_
#define COMPOSITEPATTERN_TEAM_ABSTRACTTEAM_HPP_

#include <iostream>
#include <string>

class AbstractTeam
{
 public:
	explicit AbstractTeam(std::string name) : m_name(std::move(name))
	{
	}
	std::string getName()
	{
		return m_name;
	}
	void setParent(AbstractTeam* team)
	{
		m_parent = team;
	}
	AbstractTeam* getParent()
	{
		return m_parent;
	}
	// 虚函数
	virtual bool hasChild()
	{
		return false;
	}
	virtual void addChild(AbstractTeam* node)
	{
	}
	virtual void removeChild(AbstractTeam* node)
	{
	}
	virtual void fight() = 0;
	virtual void display() = 0;
	virtual ~AbstractTeam()
	{
	}

 protected:
	std::string m_name;
	AbstractTeam* m_parent = nullptr;
};

#endif //COMPOSITEPATTERN_TEAM_ABSTRACTTEAM_HPP_
