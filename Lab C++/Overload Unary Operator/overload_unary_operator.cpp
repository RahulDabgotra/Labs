// Program to overload the unary operator
#include <iostream>
#include <conio.h>

using namespace std;

class Test
{
private:
	int num;
public:
	Test():num(8){}
	void operator++()
	{
		num=num+2;
	}

	void print()
	{
		cout<<"The count is ="<<num;
	}
};

int main()
{
	Test tt;
	++tt;
	tt.print();
	getch();
	return 0;
}
