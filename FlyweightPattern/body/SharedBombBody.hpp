//
// Created by axliu on 23-9-7.
//

#ifndef FLYWEIGHTPATTERN_SHAREDBOMBBODY_HPP
#define FLYWEIGHTPATTERN_SHAREDBOMBBODY_HPP

#include "FlyWeightBody.hpp"

class SharedBombBody : public FlyWeightBody
{
public:
	using FlyWeightBody::FlyWeightBody;

	void move(int x, int y, int speed) override
	{
		std::cout << "炸弹以每小时" << speed << "速度飞到了("
				  << x << ", " << y << ") 的位置..." << std::endl;
	}

	void draw(int x, int y) override
	{
		std::cout << "在 (" << x << ", " << y << ") 的位置重绘炸弹弹体..." << std::endl;
	}
};

#endif //FLYWEIGHTPATTERN_SHAREDBOMBBODY_HPP
