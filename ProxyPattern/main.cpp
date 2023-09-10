#include <iostream>
#include "proxy/Speaker.hpp"
#include "proxy/Communication.hpp"
#include "proxy/DenDenMushi.hpp"

int main()
{
	Communication* speaker = new Speaker;
	speaker->communicate();
	delete speaker;
	std::cout << "==========" << std::endl;
	speaker = new DenDenMushi;
	speaker->communicate();
	delete speaker;
	return 0;
}
