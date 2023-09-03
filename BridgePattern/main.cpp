#include <iostream>
#include "team/AbstractTeam.hpp"
#include "ship/AbstrachShip.hpp"
#include "ship/Merry.hpp"
#include "ship/HaiJunShip.hpp"
#include "team/CaoMaoTeam.hpp"
#include "team/SmokerTeam.hpp"

int main()
{
	auto* caomao = new CaoMaoTeam("caomao");
	auto* luffy = new Person("路飞", "船长", "橡胶果实能力者", "30亿贝里", "爱吃肉");
	auto* zoro = new Person("索隆", "剑士", "三刀流", "11亿1100万贝里", "路痴");
	auto* sanji = new Person("山治", "厨师", "隐形黑", "10亿3200万贝里", "好色");
	auto* nami = new Person("娜美", "航海士", "天候棒+宙斯", "3亿6600万贝里", "喜欢钱");
	caomao->addMember(luffy);
	caomao->addMember(zoro);
	caomao->addMember(sanji);
	caomao->addMember(nami);
	Merry* merry = new Merry(caomao);
	merry->show();
	merry->feature();

	std::cout << "===============" << std::endl;

	SmokerTeam* team = new SmokerTeam("斯摩格的海军部队");
	Person* smoker = new Person("斯摩格", "中将", "冒烟果实能力者", "", "爱吃烟熏鸡肉");
	Person* dasiqi = new Person("达斯琪", "大佐", "一刀流", "", "近视");
	team->addMember(smoker);
	team->addMember(dasiqi);
	HaiJunShip* ship = new HaiJunShip(team);
	ship->feature();
	ship->show();

	delete caomao;
	delete merry;
	delete team;
	delete ship;

	return 0;
}
