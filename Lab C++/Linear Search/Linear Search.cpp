// Program to perform linear search by using pointers
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int array[100]={1,10,11,12,13};
	int i,num,*pointer;

	pointer=array;

	cout<<"Enter the elements to be searched :";
	cin>>num;

	for(i=0;i<=4;i++)
	{
		if(*pointer==num)
		{
			cout<<"\n"<<num<<" is PRESENT inside the array";
			break;
		}
		else
        if(i==4)
		{
			cout<<"\n"<<num<<" is NOT PRESENT inside the array";
		}
		pointer++;
		getch();
	}
}
