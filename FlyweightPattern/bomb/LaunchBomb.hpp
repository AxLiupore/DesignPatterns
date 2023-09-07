//
// Created by axliu on 23-9-7.
//

#ifndef FLYWEIGHTPATTERN_LAUNCHBOMB_HPP
#define FLYWEIGHTPATTERN_LAUNCHBOMB_HPP

#include "../body/FlyWeightBody.hpp"

class LaunchBomb
{
public:
	explicit LaunchBomb(FlyWeightBody* body) : m_body(body)
	{
	}

	void setSpeed(int speed)
	{
		m_speed = speed;
	}

	void move(int x, int y)
	{
		m_x = x;
		m_y = y;
		m_body->move(m_x, m_y, m_speed);
		draw();
	}

	void draw()
	{
		m_body->draw(m_x, m_y);
	}


private:
	FlyWeightBody* m_body;
	int m_speed = 100;
	int m_x = 0;
	int m_y = 0;
};

#endif //FLYWEIGHTPATTERN_LAUNCHBOMB_HPP
