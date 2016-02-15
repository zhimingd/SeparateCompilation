#include <iostream>
using namespace std;

class Tool
{
public:
	void useMe();
	
};

void Tool::useMe()
{
	cout << "Calling useME" << endl;
}

class A 
{
public:
	void doSomething();
};

void A::doSomething()
{
	Tool tool;
	tool.useMe();
}


class B
{
public:
	void doSomething();
};
void B::doSomething()
{
	Tool tool;
	tool.useMe();
}

void main()
{
	A a;
	a.doSomething();

	B b;
	b.doSomething();

}