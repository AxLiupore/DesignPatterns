//
// Created by AxLiupore on 2023/9/3.
//

#ifndef ADAPTERPATTERN_CHOPPER_ENGLISHCHOPPER_HPP_
#define ADAPTERPATTERN_CHOPPER_ENGLISHCHOPPER_HPP_

#include <string>
#include "AbstractChopper.hpp"

class EnglishChopper : public AbstractChopper
{
 public:
	// 子类继承了所有在父类中定义的构造函数
	using AbstractChopper::AbstractChopper;
	void translateToPanda() override
	{
		std::string msg = m_foreigner->confession();
		// 解析熊猫的语言，并将数据传递给熊猫
		m_panda.recvMessage("English say: " + msg);
	}
	void translateToHuman() override
	{
		std::string msg = m_panda.sendMessage();
		// 将熊猫语言转换为英语，传递给外国人
		m_foreigner->setResult("English" + msg);
	}
};

#endif //ADAPTERPATTERN_CHOPPER_ENGLISHCHOPPER_HPP_
