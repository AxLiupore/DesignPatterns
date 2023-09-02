//
// Created by AxLiupore on 2023/9/3.
//

#ifndef ADAPTERPATTERN_FOREIGNER_FRENCH_HPP_
#define ADAPTERPATTERN_FOREIGNER_FRENCH_HPP_

#include "Forigner.hpp"

class French : public Forigner
{
	std::string confession() override
	{
		return "French: I am a sb";
	}
};

#endif //ADAPTERPATTERN_FOREIGNER_FRENCH_HPP_
