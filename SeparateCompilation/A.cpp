
#include "A.h"
#include "Tool.h"
#include <iostream>

void A::doSomething()
{
	std::cout << "A ";
	Tool tool;
	tool.useMe();
}
