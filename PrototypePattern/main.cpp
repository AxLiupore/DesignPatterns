#include <iostream>
#include "pattern/GermaSolider.hpp"
#include "pattern/Solider1.hpp"
#include "pattern/Solider2.hpp"

int main()
{
	GermaSolider* obj = new Solider1;
	GermaSolider* solider = obj->clone();
	std::cout << solider->whoAmI() << std::endl;
	std::cout << &obj << " " << &solider << std::endl;
	delete obj;
	delete solider;

	obj = new Solider2;
	solider = obj->clone();
	std::cout << solider->whoAmI() << std::endl;
	delete obj;
	delete solider;
	return 0;
}
