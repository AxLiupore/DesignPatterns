//
// Created by AxLiupore on 2023/9/2.
//

#ifndef ADAPTERPATTERN_FOREIGNER_AMERICAN_HPP_
#define ADAPTERPATTERN_FOREIGNER_AMERICAN_HPP_

#include "Forigner.hpp"

class American : public Forigner
{
	std::string confession() override
	{
		return "American: I am a sb";
	}
};

#endif //ADAPTERPATTERN_FOREIGNER_AMERICAN_HPP_
