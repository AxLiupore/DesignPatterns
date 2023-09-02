//
// Created by AxLiupore on 2023/9/3.
//

#ifndef ADAPTERPATTERN_CHOPPER_FRENCHCHOPPER_HPP_
#define ADAPTERPATTERN_CHOPPER_FRENCHCHOPPER_HPP_

#include <string>
#include "AbstractChopper.hpp"

class FrenchChopper : public AbstractChopper
{
 public:
	using AbstractChopper::AbstractChopper;
	void translateToPanda() override
	{
		std::string msg = m_foreigner->confession();
		// 解析熊猫的语言，并将数据传递给熊猫
		m_panda.recvMessage("French say: " + msg);
	}
	void translateToHuman() override
	{
		std::string msg = m_panda.sendMessage();
		// 将熊猫语言转换为英语，传递给外国人
		m_foreigner->setResult("French" + msg);
	}
};

#endif //ADAPTERPATTERN_CHOPPER_FRENCHCHOPPER_HPP_
