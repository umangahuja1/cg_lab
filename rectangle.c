#include <graphics.h>

int main()
{
    int gdriver = DETECT, mode;  
    initgraph(&gdriver, &mode, "");

    rectangle(100,100,500,300);
    getch();
    closegraph();
    return 0;  
}