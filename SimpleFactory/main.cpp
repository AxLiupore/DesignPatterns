#include <iostream>
#include "Factory.hpp"

int main()
{
	SmileFactory* smileFactory = new SmileFactory;
	auto abstractSmile = smileFactory->createSmile(Type::Lion);
	abstractSmile->ability();
	abstractSmile->tranform();
	return 0;
}
