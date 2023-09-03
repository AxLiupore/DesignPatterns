//
// Created by AxLiupore on 2023/9/3.
//

#ifndef BRIDGEPATTERN_TEAM_CAOMAOTEAM_HPP_
#define BRIDGEPATTERN_TEAM_CAOMAOTEAM_HPP_

#include "AbstractTeam.hpp"

class CaoMaoTeam : public AbstractTeam
{
 public:
	using AbstractTeam::AbstractTeam;
	void executeTask() override
	{
		std::cout << "To be ONE PIECE" << std::endl;
	}
};

#endif //BRIDGEPATTERN_TEAM_CAOMAOTEAM_HPP_
