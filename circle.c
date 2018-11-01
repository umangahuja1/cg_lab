#include <graphics.h>

int main()
{
    int gdriver = DETECT, mode;
    initgraph(&gdriver, &mode, "");
    circle(250,250,100);
    circle(200,225,7);
    circle(300,225,7);
    line(250,250,250,275);
    line(217,291,283,291);
    arc(250,280,20,160,35);
    getch();
    closegraph();
    return 0;
}