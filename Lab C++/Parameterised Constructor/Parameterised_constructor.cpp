// Program using parameterised constructor
#include <iostream>
#include <conio.h>

using namespace std;

class line
{
	public:
		void setlength(double len);
		double getlength(void);
		line(double len); // This is the constructor declaration
	private:
		double length;
};

// Member function definition including constructor
line::line(double len)
{
	cout<<" Object is being created, Length= "<<len<<endl;
	length=len;
}

void line::setlength(double len)
{
	length=len;
}

double line::getlength(void)
{
	return length;
}

// Main function for the program
int main()
{
	line line(10.0);
	//get intially set length
	cout<<" Length of line ="<<line.getlength()<<endl;
	//set line length again
	line.setlength(6.0);
	cout<<" Length of line ="<<line.getlength()<<endl;
	return 0;
}
