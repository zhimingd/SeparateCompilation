#include "Tool.h"
#include "B.h"
#include <iostream>

void B::doSomething()
{
	std::cout << "B ";
	Tool tool;
	tool.useMe();
}
