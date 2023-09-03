//
// Created by AxLiupore on 2023/9/3.
//

#ifndef BRIDGEPATTERN_SHIP_ABSTRACHSHIP_HPP_
#define BRIDGEPATTERN_SHIP_ABSTRACHSHIP_HPP_

#include "../team/AbstractTeam.hpp"

class AbstractShip
{
 public:
	explicit AbstractShip(AbstractTeam* team) : m_team(team)
	{
	}
	void show()
	{
		m_team->show();
		m_team->executeTask();
	}
	virtual std::string getName() = 0;
	virtual void feature() = 0;

 protected:
	AbstractTeam* m_team;
};

#endif //BRIDGEPATTERN_SHIP_ABSTRACHSHIP_HPP_
