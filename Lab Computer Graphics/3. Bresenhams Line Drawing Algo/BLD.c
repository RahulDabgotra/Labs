// Bresenhams Line Drawing Algo
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

void main()
{
    int gd, gm, i;
    float x, y, x0, y0, x1, y1, dx, dy, p;
    clrscr();
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("\n Enter the value of x0, y0, x1 and y1 :");
    scanf("%f%f%f%f", &x0, &y0, &x1, &y1);
    dx = abs(x1 - x0);
    dy = abs(y1 - y0);
    x = x0;
    y = y0;
    p = 2 * dy - dx;
    i = 1;
    do
    {
        putpixel(x, y, BLUE);
        while (p > 0)
        {

            y = y + 1;
            p = p - 2 * dx;
        }
        x = x + 1;
        p = p + 2 * dy;
        i = i + 1;

    } while (x <= dx);
    getch();
    closegraph();
}