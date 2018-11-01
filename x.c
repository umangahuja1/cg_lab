#include <graphics.h>
#include <math.h>

int main()
{
	int gd = DETECT,gm;
	initgraph(&gd, &gm, "");

	int a = getmaxx();
	int b = getmaxy();

	int y = b/2;
	int x = a/2;

	line(0, y, 300, y);
	int x1 = x + 100;
	int y1 = y - 100;
	int x2 = x + 150;
	int y2 = y - 150;

	line(x - 100, y + 100, x - 200, y + 100);
	line(x - 150, y + 150, x - 200, y + 100);
	line(x - 100, y + 100, x - 150, y + 150); 
	line(x - 100, y - 100, x - 150, y - 150);
	line(x - 150, y - 150, x - 200, y - 100);
	line(x - 200, y - 100, x - 100, y - 100);
	
	getch();
	closegraph();
	return 0;
}