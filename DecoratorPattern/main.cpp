#include <iostream>
#include "solider/Solider.hpp"
#include "solider/Teach.hpp"
#include "fruit/DevilFruit.hpp"
#include "fruit/DarkFruit.hpp"
#include "fruit/PieFruit.hpp"
#include "fruit/QuakeFruit.hpp"

int main()
{
	Solider* solider = new Teach;
	DevilFruit* dark = new DarkFruit;
	DevilFruit* quake = new QuakeFruit;
	DevilFruit* pie = new PieFruit;
	// 通过恶魔果实去装饰黑胡子
	dark->enchantment(solider);
	quake->enchantment(dark);
	pie->enchantment(quake);
	pie->fight();

	delete solider;
	delete dark;
	delete quake;
	delete pie;
	return 0;
}
