//
// Created by AxLiupore on 2023/9/1.
//

#ifndef ABSTRACTFACTORY_BODY_METALBODY_HPP_
#define ABSTRACTFACTORY_BODY_METALBODY_HPP_

#include "ShipBody.hpp"

class MetalBody : public ShipBody
{
 public:
	std::string getBody() override
	{
		return std::string("use MetalBody");
	}
};

#endif //ABSTRACTFACTORY_BODY_METALBODY_HPP_
