//
// Created by axliu on 23-9-10.
//

#ifndef PROXYPATTERN_DENDENMUSHI_HPP
#define PROXYPATTERN_DENDENMUSHI_HPP

#include "Communication.hpp"
#include "Speaker.hpp"

class DenDenMushi : public Communication
{
public:
	DenDenMushi()
	{
		m_isStart = true;
		m_speaker = new Speaker;
	}

	bool isStart() const
	{
		return m_isStart;
	}

	void setStart(bool flag)
	{
		m_isStart = flag;
	}

	void communicate() override
	{
		if (isStart())
		{
			// 得到通话者语言和表情信息, 并加以模仿
			std::cout << "电话虫开始实时模仿通话者的语言和表情..." << std::endl;
			m_speaker->communicate();
		}
	}

	~DenDenMushi() override
	{
		delete m_speaker;
	}

private:
	Speaker* m_speaker = nullptr;
	bool m_isStart = false;
};

#endif //PROXYPATTERN_DENDENMUSHI_HPP
