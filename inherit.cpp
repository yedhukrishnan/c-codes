#include <iostream>

using namespace std;

class A
{
	public:
	virtual void foo()
	{
		cout<<"I am A\n";
	}
};

class B: public A
{
	public:
	virtual void foo()
	{
		cout<<"I am B\n";
	}
};

class C: public B
{
	public:
	virtual void foo()
	{
		cout<<"I am C\n";
	}
};

void foo(A a)
{
	a.foo();
}

int main()
{
	C c;
	foo(c);
	return 0;
}
