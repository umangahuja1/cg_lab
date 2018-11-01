#include <graphics.h>
#include <stdio.h>

int main()
{
    int g = DETECT, mode;
    initgraph(&g,&mode,"");

    for(int j=0;j<16;j++)
        for(int i=100;i<200;i++)
        {
            putpixel(15*(j+1),i,j);
        }
    getch();
    closegraph();
}