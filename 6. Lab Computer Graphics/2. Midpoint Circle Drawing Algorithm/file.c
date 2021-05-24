#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	int gd = DETECT, gm;
	int x2, x1, dx, dy, y1, y2, i, x, y, length;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

	
	getch();
	closegraph();
}