#include <iostream>
#include "cannon/LionCannon.hpp"

int main()
{
	auto* lion = new LionCannon;
	lion->aimAndLock();
	lion->fire();
	return 0;
}
