#include <graphics.h>
#include <stdio.h>
 
void flood(int x, int y, int new_col, int old_col)
{
    if (getpixel(x, y) == old_col) {
 
        putpixel(x, y, new_col);
 
        flood(x + 1, y, new_col, old_col);
 
        flood(x - 1, y, new_col, old_col);
 
        flood(x, y + 1, new_col, old_col);
 
        flood(x, y - 1, new_col, old_col);
    }
}
 
int main()
{
    int gd = DETECT, mode;
 
    initgraph(&gd, &mode, "");
 
    int top, left, bottom, right;
 
    top = 30;
    left = 150;

    bottom = 230;
    right = 350;
 
    rectangle(left, top, right, bottom);
 
    int x = left + 1;
    int y = top + 1;
 
    int newcolor=1;
    int oldcolor = 0;
    
    for(int i=1;i<2;i++)
    {
        newcolor = i;
        flood(x, y, newcolor, oldcolor);
        oldcolor = newcolor;
        getch();
    }

    getch();
 
    return 0;
}