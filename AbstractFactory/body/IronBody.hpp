//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_BODY_IRONBODY_HPP_
#define ABSTRACTFACTORY_BODY_IRONBODY_HPP_

#include "ShipBody.hpp"

class IronBody : public ShipBody
{
 public:
	std::string getBody() override
	{
		return std::string("use IronBody");
	}
};

#endif //ABSTRACTFACTORY_BODY_IRONBODY_HPP_
