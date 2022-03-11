// Program using constructor
#include <iostream>
#include <conio.h>

using namespace std;

class line
{
	public:
		void setlength(double len);
		double getlength(void);
		line(); // This is the constructor declaration
	private:
		double length;
};

// Member function definition including constructor
line::line(void)
{
	cout<<" Object is being created "<<endl;
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
	line line;
	//set line length
	line.setlength(6.0);
	cout<<" Length of line ="<<line.getlength()<<endl;
	return 0;
}
