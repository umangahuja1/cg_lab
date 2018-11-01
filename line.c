#include<graphics.h>
int main()
{
    int gdriver = DETECT, gm;
    initgraph(&gdriver, &gm, "");
 
    line(100,100,300,300);
 
    getch();
    closegraph();
    return 0
    ;
}
