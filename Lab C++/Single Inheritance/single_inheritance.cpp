#include <iostream>
#include <conio.h>

using namespace std;

class A
{
	public:
		int a=4;
		int b=5;

		int mul()
		{
			int c=a*b;
			return c;
		}
};

class B:private A
{
	public:
		void display()
		{
			int result=mul();
			std::cout<<" Displaying multiplication of a & b ="<<result;
		}
};

int main()
{
	B b;
	b.display();
	getch();
	return 0;
}
