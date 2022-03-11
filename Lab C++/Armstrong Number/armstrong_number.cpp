// Program to find whether the number is armstrong number or not
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n,r,sum=0,temp;
	cout<<"\n Enter the number = ";
	cin>>n;
	temp=n;

	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}

	if(temp==sum)
		cout<<"\n Number is Armstrong Number";
	else
		cout<<"\n Number is NOT Armstrong Number";
	getch();
	return 0;
}
