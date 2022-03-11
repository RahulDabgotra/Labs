// Program to find whelther the number is palindrome or not
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n,num,digit,rev=0;
	cout<<"\n Enter a positive number =";
	cin>>num;

	n=num;

	do
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}

	while(num!=0);
		cout<<"\n The reverse of number is ="<<rev<<endl;
	if(n==rev)
		cout<<"\n The number is a palindrome number";
	else
		cout<<"\n The number is NOT palindrome number";
	getch();
	return 0;
}
