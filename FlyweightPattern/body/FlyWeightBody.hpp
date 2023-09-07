//
// Created by axliu on 23-9-7.
//

#ifndef FLYWEIGHTPATTERN_FLYWEIGHTBODY_HPP
#define FLYWEIGHTPATTERN_FLYWEIGHTBODY_HPP

#include <iostream>
#include <string>

// 享元类的基类
class FlyWeightBody
{
public:
	explicit FlyWeightBody(std::string sprite) : m_sprite(std::move(sprite))
	{
	}

	virtual void move(int x, int y, int speed) = 0;

	virtual void draw(int x, int y) = 0;

	virtual ~FlyWeightBody() = default;

protected:
	std::string m_sprite;
	std::string m_color;
};

#endif //FLYWEIGHTPATTERN_FLYWEIGHTBODY_HPP
