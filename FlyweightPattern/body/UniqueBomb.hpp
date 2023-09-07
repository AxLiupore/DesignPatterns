//
// Created by axliu on 23-9-7.
//

#ifndef FLYWEIGHTPATTERN_UNIQUEBOMB_HPP
#define FLYWEIGHTPATTERN_UNIQUEBOMB_HPP

#include "FlyWeightBody.hpp"

class UniqueBomb : public FlyWeightBody
{
	using FlyWeightBody::FlyWeightBody;

	void move(int x, int y, int speed) override
	{
		// 此处省略对参数 x, y, speed的处理
		std::cout << "彩蛋在往指定位置移动, 准备爆炸发放奖励..." << std::endl;
	}

	void draw(int x, int y) override
	{
		std::cout << "在 (" << x << ", " << y << ") 的位置重绘彩蛋运动轨迹..." << std::endl;
	}
};

#endif //FLYWEIGHTPATTERN_UNIQUEBOMB_HPP
