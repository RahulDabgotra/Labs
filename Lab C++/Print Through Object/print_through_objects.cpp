// Program to input 2 numbers and print through objects
#include <iostream>
#include <conio.h>

using namespace std;

class number
{
    public:
        int a,n;
        int input()
        {
            cout<<"\n Enter numbers = \n";
            cin>>a>>n;
        }
        int output()
        {
            cout<<"\n The numbers are=\n";
            cout<<"\n a="<<a<<"\n n="<<n;
        }
};
int main()
{
	number n1,n2;
	n1.input();
	n1.output();
	cout<<endl;
	n2.input();
	n2.output();
	cout<<endl;
	return 0;
}
