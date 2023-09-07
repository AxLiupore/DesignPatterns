#include <iostream>
#include <vector>
#include <string>
#include "body/FlyWeightBody.hpp"
#include "bomb/BombBodyFactory.hpp"
#include "bomb/LaunchBomb.hpp"
#include "body/UniqueBomb.hpp"

int main()
{
	auto* factory = new BombBodyFactory;
	std::vector<LaunchBomb*> bomList;
	std::vector<LaunchBomb*> ballList;
	std::vector<std::string> namelist = { "撒旦-1", "撒旦-1", "撒旦-2", "撒旦-2", "撒旦-2", "撒旦-3" };
	for (auto& name: namelist)
	{
		int x = 0, y = 0;
		// 得到一个享元对象，如果已经存在就直接返回，不存在就创建
		auto* launch = new LaunchBomb(factory->getSharedData(name));
		for (int i = 0; i < 3; i++)
		{
			x += rand() % 100;
			y += rand() % 50;
			launch->move(x, y);
		}
		bomList.push_back(launch);
	}

	// 彩蛋
	UniqueBomb* unique = new UniqueBomb("大彩蛋");
	LaunchBomb* bomb = new LaunchBomb(unique);
	int x = 0, y = 0;
	for (int i = 0; i < 3; ++i)
	{
		x += rand() % 100;
		y += rand() % 50;
		bomb->move(x, y);
	}
	for (auto ball: ballList)
	{
		delete ball;
	}
	delete factory;
	delete unique;
	delete bomb;
	return 0;
}
