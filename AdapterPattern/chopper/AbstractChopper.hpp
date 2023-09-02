//
// Created by AxLiupore on 2023/9/3.
//

#ifndef ADAPTERPATTERN_CHOPPER_ABSTRACTCHOPPER_HPP_
#define ADAPTERPATTERN_CHOPPER_ABSTRACTCHOPPER_HPP_

#include "../foreigner/Forigner.hpp"
#include "../panda/Panda.hpp"

class AbstractChopper
{
 public:
	AbstractChopper(Forigner* Forigner) : m_foreigner(Forigner)
	{
	}
	virtual void translateToPanda() = 0;
	virtual void translateToHuman() = 0;
	virtual ~AbstractChopper()
	{
	}

 protected:
	Forigner* m_foreigner;
	Panda m_panda;
};

#endif //ADAPTERPATTERN_CHOPPER_ABSTRACTCHOPPER_HPP_
