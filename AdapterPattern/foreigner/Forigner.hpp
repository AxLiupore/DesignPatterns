//
// Created by AxLiupore on 2023/9/2.
//

#ifndef ADAPTERPATTERN_FOREIGNER_Forigner_HPP_
#define ADAPTERPATTERN_FOREIGNER_Forigner_HPP_

#include <iostream>
#include <string>

class Forigner
{
 public:
	virtual std::string confession() = 0;
	void setResult(std::string res)
	{
		std::cout << "Panda say: " << res << std::endl;
	}
	virtual ~Forigner()
	{
	}
};

#endif //ADAPTERPATTERN_FOREIGNER_Forigner_HPP_
