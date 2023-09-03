//
// Created by AxLiupore on 2023/9/3.
//

#ifndef BRIDGEPATTERN_TEAM_SMOKERTEAM_HPP_
#define BRIDGEPATTERN_TEAM_SMOKERTEAM_HPP_

#include "AbstractTeam.hpp"

class SmokerTeam : public AbstractTeam
{
 public:
	using AbstractTeam::AbstractTeam;
	void executeTask() override
	{
		std::cout << "catch pirates" << std::endl;
	}
};

#endif //BRIDGEPATTERN_TEAM_SMOKERTEAM_HPP_
