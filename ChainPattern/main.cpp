#include <iostream>
#include "manager/AbstractManager.hpp"
#include "manager/CEO.hpp"
#include "manager/BOSS.hpp"
#include "manager/Manager.hpp"
#include "people/DaCongMing.hpp"

int main()
{
	auto* manager = new Manager;
	auto ceo = new CEO;
	auto boss = new BOSS;
	manager->setNext(ceo);
	ceo->setNext(boss);

	// 创建员工的实例对象
	auto* boy = new DaoCongMing;
	std::cout << "========== 大聪明向顶头上司提要求 ==========" << std::endl;
	boy->request(RequestType::QingJia, manager);
	boy->request(RequestType::ZhangXin, manager);
	boy->request(RequestType::CiZhi, manager);
	std::cout << "========== 大聪明越级找CEO提要求 ==========" << std::endl;
	boy->request(RequestType::QingJia, ceo);
	boy->request(RequestType::ZhangXin, ceo);
	boy->request(RequestType::CiZhi, ceo);
	std::cout << "========== 大聪明直接找BOSS提要求 ==========" << std::endl;
	boy->request(RequestType::QingJia, boss);
	boy->request(RequestType::ZhangXin, boss);
	boy->request(RequestType::CiZhi, boss);

	delete boy;
	delete manager;
	delete ceo;
	delete boss;
	return 0;
}
