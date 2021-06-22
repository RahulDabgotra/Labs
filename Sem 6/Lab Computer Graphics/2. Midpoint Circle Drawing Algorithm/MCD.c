#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main()
{
	float p;
	int gd, gm, i, x, y, r;
	clrscr();
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	printf("Enter the radius of circle :");
	scanf("%d", &r);
	x = 0;
	y = r;
	p = 1.25 - r;
	do
	{
		putpixel(200 + x, 200 + y, 15);
		putpixel(200 + y, 200 + x, 15);
		putpixel(200 + x, 200 - y, 15);
		putpixel(200 + y, 200 - x, 15);
		putpixel(200 - x, 200 - y, 15);
		putpixel(200 - x, 200 + y, 15);
		putpixel(200 - y, 200 + x, 15);
		putpixel(200 - y, 200 - x, 15);
		if (p < 0)
		{
			x = x + 1;
			y = y;
			p = p + 2 * (x + 1);
		}
		else
		{
			x = x + 1;
			y = y - 1;
			p = p + 2 * (x - y) + 1;
		}
		delay(50);
	} while (x < y);
	getch();
	closegraph();
}