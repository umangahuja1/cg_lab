#include<stdio.h>
#include<graphics.h>
 
void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
 
    while (x >= y)
    {
    putpixel(x0 + x, y0 + y, 7);
    putpixel(x0 + y, y0 + x, 7);
    putpixel(x0 - y, y0 + x, 7);
    putpixel(x0 - x, y0 + y, 7);
    putpixel(x0 - x, y0 - y, 7);
    putpixel(x0 - y, y0 - x, 7);
    putpixel(x0 + y, y0 - x, 7);
    putpixel(x0 + x, y0 - y, 7);
 
    if (err <= 0)
    {
        y += 1;
        err += 2*y + 1;
    }
 
    if (err > 0)
    {
        x -= 1;
        err -= 2*x + 1;
    }
    }
}
 
int main()
{
    int gdriver=DETECT, gmode, x, y, r;
    printf("Enter radius of circle: ");
    scanf("%d", &r);
 
    printf("Enter co-ordinates of center(x and y): ");
    scanf("%d%d", &x, &y);
    
    initgraph(&gdriver, &gmode, "");
    drawcircle(x, y, r);
    getch();

    return 0;
}

