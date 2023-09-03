//
// Created by AxLiupore on 2023/9/3.
//

#ifndef BRIDGEPATTERN_TEAM_ABSTRACTTEAM_HPP_
#define BRIDGEPATTERN_TEAM_ABSTRACTTEAM_HPP_

#include <iostream>
#include <string>
#include <utility>
#include <map>

struct Person
{
	Person(std::string name, std::string job, std::string ability, std::string reward, std::string beizhu) :
		name(std::move(name)),
		job(std::move(job)),
		ability(std::move(ability)),
		reward(std::move(reward)),
		beizhu(std::move(beizhu))
	{
	}
	std::string name;
	std::string job;
	std::string ability;
	std::string reward;
	std::string beizhu;
};

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
	void addMember(Person* p)
	{
		m_teamMap.insert(std::make_pair(p->name, p));
	}
	void show()
	{
		std::cout << m_name << std::endl;
		for (const auto& item : m_teamMap)
		{
			std::cout << "name: " << item.second->name
					  << ",job: " << item.second->job
					  << ",ability: " << item.second->ability
					  << ",reward: " << item.second->reward
					  << ",beizhu: " << item.second->beizhu << std::endl;
		}
	}
	virtual ~AbstractTeam()
	{
		for (const auto& item : m_teamMap)
		{
			delete item.second;
		}
	}
	// 每个团队执行的任务是不一样的
	virtual void executeTask() = 0;

 protected:
	std::string m_name;
	std::map<std::string, Person*> m_teamMap;
};

#endif //BRIDGEPATTERN_TEAM_ABSTRACTTEAM_HPP_
