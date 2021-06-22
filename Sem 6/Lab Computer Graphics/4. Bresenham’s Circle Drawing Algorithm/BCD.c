//To implement Bresenham’s Circle drawing algorithm.
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
int main()
{
	int gd = DETECT, gm;
	int d, r, x, y, xc, yc;
	clrscr();
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	printf("Enter the value of radius  :");
	scanf("%d", &r);
	printf("\nEnter the values of xc and yc :");
	scanf("%d", &xc);
	scanf("%d", &yc);
	d = 3 - 2 * r;
	x = 0;
	y = r;
	while (x <= y)
	{
		putpixel(xc + x, yc + y, 5);
		putpixel(xc - y, yc - x, 5);
		putpixel(xc + y, yc - x, 5);
		putpixel(xc - y, yc + x, 5);
		putpixel(xc + y, yc + x, 5);
		putpixel(xc - x, yc - y, 5);
		putpixel(xc + x, yc - y, 5);
		putpixel(xc - x, yc + y, 5);
		if (d <= 0)
		{
			d = d + 4 * x + 6;
		}
		else
		{
			d = d + 4 * x - 4 * y + 10;
			y = y - 1;
		}
		x = x + 1;
	}
	getch();
	return 0;
}