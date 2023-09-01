//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_BODY_WOODBODY_HPP_
#define ABSTRACTFACTORY_BODY_WOODBODY_HPP_

#include "ShipBody.hpp"

class WoodBody : public ShipBody
{
 public:
	std::string getBody() override
	{
		return std::string("use WoodBody");
	}
};

#endif //ABSTRACTFACTORY_BODY_WOODBODY_HPP_
