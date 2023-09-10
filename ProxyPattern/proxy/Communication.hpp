//
// Created by axliu on 23-9-10.
//

#ifndef PROXYPATTERN_COMMUNICATION_HPP
#define PROXYPATTERN_COMMUNICATION_HPP

#include <iostream>

class Communication
{
public:
	virtual void communicate() = 0;

	virtual ~Communication() = default;
};

#endif //PROXYPATTERN_COMMUNICATION_HPP
