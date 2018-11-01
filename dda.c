#include <graphics.h>
#include <stdio.h>
#include <math.h>


// dy = y2 - y1;
// dx = x2 -x1;
// m = dy/dx;

// if m<1

//     xnext = x + 1;      or xnext = x + dx/steps;
//     ynext = y + m;      or ynext = y + dy/steps;
//     steps = x2 - x1;    no of times we need to run this algorithm


// if m>1
//     xnext = x + 1/m;    or xnext = x + dx/steps
//     ynext = y + 1;      or ynext = y + dy/steps
//     steps = y2 - y1;    no of times we need to run this algorithm

// if m==1
//     xnext = x + 1;     or xnext = x + dx/steps; 
//     ynext = y + 1;     or ynext = y + dy/steps
//     steps = x2 - x1 or y2 - y1      no of times we need to run this algorithm


int main( )
{
    float x,y,x1,y1,x2,y2,dx,dy,step;
    int i,gd=DETECT,gm;
 
    printf("Enter the value of x1 and y1 : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%f%f",&x2,&y2);

    initgraph(&gd,&gm," ");
 
    dx=abs(x2-x1);
    dy=abs(y2-y1);
 
    if(dx>=dy)
        step=dx;
    else
        step=dy;
 
    dx=dx/step;
    dy=dy/step;
 
    x=x1;
    y=y1;
 
    i=1;
    while(i<=step)
    {
        putpixel(x,y,1);
        x=x+dx;
        y=y+dy;
        i=i+1;
        delay(10);
    }

    getch();
 
    closegraph();
}