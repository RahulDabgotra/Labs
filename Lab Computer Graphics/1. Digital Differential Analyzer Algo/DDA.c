#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main()
{
	int gd = DETECT, gm;
	int x2, x1, dx, dy, y1, y2, i, x, y, length;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	printf("Enter the coordinates of x1,y1,x2,y2 :");
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	dx = x2 - x1;
	dy = y2 - y1;

	if (dx >= dy)
	{
		length = dx;
	}
	else
	{
		length = dy;
	}

	dx = (x2 - x1) / length;
	dy = (y2 - y1) / length;

	x = x1 + 0.5;
	y = y1 + 0.5;

	i = 1;

	while (i <= length)
	{
		putpixel(x, y, WHITE);
		x = x + dx;
		y = y + dy;
		i = i + 1;
	}
	getch();
	closegraph();
}