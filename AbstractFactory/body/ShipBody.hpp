//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_THING_SHIPBODY_HPP_
#define ABSTRACTFACTORY_THING_SHIPBODY_HPP_

#include <string>

class ShipBody
{
 public:
	virtual std::string getBody() = 0;
	virtual ~ShipBody()
	{
	}
};

#endif //ABSTRACTFACTORY_THING_SHIPBODY_HPP_
