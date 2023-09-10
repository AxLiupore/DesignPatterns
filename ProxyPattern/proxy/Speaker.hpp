//
// Created by axliu on 23-9-10.
//

#ifndef PROXYPATTERN_SPEAKER_HPP
#define PROXYPATTERN_SPEAKER_HPP

#include "Communication.hpp"

class Speaker : public Communication
{
public:
	void communicate() override
	{
		std::cout << "开始说话..." << std::endl;
		std::cout << "通话时发生了一些列的表情变化..." << std::endl;
	}
};

#endif //PROXYPATTERN_SPEAKER_HPP
