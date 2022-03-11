// Program to perform hybrid inheritance
// ambiguity??
#include <iostream>
#include <conio.h>

using namespace std;

class A
{
protected:
	int a;
public:
	void get_a()
	{
		cout<<"\nEnter the value of a ="<<endl;
		cin>>a;
	}
};

class B:public A
{
protected:
	int b;
public:
	void get_b()
	{
		cout<<"\nEnter the value of b ="<<endl;
		cin>>b;
	}
};

class C
{
protected:
	int c;
public:
	void get_c()
	{
		cout<<"\nEnter the value of c ="<<endl;
		cin>>c;
	}
};

class D:public A,public C
{
protected:
	int d;
public:
	void mul()
	{
	    get_a();
		get_b();
		get_c();
		cout<<"\nMultiplication of a, b and c is ="<<a*b*c<<endl;
	}
};

int main()
{
	D d;
	d.mul();
	getch();
	return 0;
}
