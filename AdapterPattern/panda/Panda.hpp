//
// Created by AxLiupore on 2023/9/3.
//

#ifndef ADAPTERPATTERN_PANDA_PANDA_HPP_
#define ADAPTERPATTERN_PANDA_PANDA_HPP_

#include <iostream>
#include <string>

class Panda
{
 public:
	void recvMessage(std::string msg)
	{
		std::cout << "Panda recvMessage is " << msg << std::endl;
	}
	std::string sendMessage()
	{
		return "you is a sb";
	}
};

#endif //ADAPTERPATTERN_PANDA_PANDA_HPP_
