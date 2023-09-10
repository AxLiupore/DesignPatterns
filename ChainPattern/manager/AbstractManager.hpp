//
// Created by axliu on 23-9-10.
//

#ifndef CHAINPATTERN_ABSTRACTMANAGER_HPP
#define CHAINPATTERN_ABSTRACTMANAGER_HPP

#include <iostream>

// 强类型枚举，可以指定枚举的类型
enum class RequestType : char
{
	QingJia,
	ZhangXin,
	CiZhi
};

// 抽象的管理者节点
class AbstractManager
{
public:
	void setNext(AbstractManager* next)
	{
		m_next = next;
	}

	virtual void handleRequest(RequestType type) = 0;

	virtual ~AbstractManager() = default;

protected:
	AbstractManager* m_next = nullptr;
};

#endif //CHAINPATTERN_ABSTRACTMANAGER_HPP
