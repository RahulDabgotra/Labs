// Program to check whelther the number is prime or not
#include <iostream>
#include <conio.h>

using namespace std;

class prime
{
	int a,b,k,i;
	public:
		prime(int x)
		{
			a=x;

		}

		void calculate()
		{
			k=1;
			for(i=2;i<=a/2;i++)
                if(a%i==0)
                {
                    k=0;
                    break;
                }
                else
                {
                    k=1;
                }
        }
		void show()
		{
			if(k==1)
				cout<<"\n"<<a<<" is Prime Number";
			else
				cout<<"\n"<<a<<" is NOT Prime Number";
		}
};
int main()
{
	int a;
	cout<<" Enter Number =";
	cin>>a;
	prime obj(a);
	obj.calculate();
	obj.show();
	getch();
	return 0;
}
