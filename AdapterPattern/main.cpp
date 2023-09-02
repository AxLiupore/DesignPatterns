#include <iostream>
#include "chopper/AbstractChopper.hpp"
#include "foreigner/Forigner.hpp"
#include "foreigner/American.hpp"
#include "chopper/EnglishChopper.hpp"

int main()
{
	Forigner* forigner = new American;
	AbstractChopper* adapter = new EnglishChopper(forigner);
	adapter->translateToPanda();
	adapter->translateToHuman();
	delete forigner;
	delete adapter;
	return 0;
}
