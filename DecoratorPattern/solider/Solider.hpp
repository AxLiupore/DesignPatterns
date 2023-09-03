//
// Created by AxLiupore on 2023/9/3.
//

#ifndef DECORATORPATTERN_SOLIDER_SOLIDER_HPP_
#define DECORATORPATTERN_SOLIDER_SOLIDER_HPP_

#include <iostream>
#include <string>

// 战士的基类
class Solider
{
 public:
	explicit Solider() = default;
	explicit Solider(std::string name) : m_name(std::move(name))
	{
	}
	std::string getName()
	{
		return m_name;
	}
	virtual void fight() = 0;
	virtual ~Solider() = default;

 protected:
	std::string m_name = std::string();
};

#endif //DECORATORPATTERN_SOLIDER_SOLIDER_HPP_
