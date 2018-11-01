#include <graphics.h>
#include <math.h>

int max_width;
int max_height;

int x_axis;
int y_axis;

void plot_axes()
{
    max_width = getmaxx();
	max_height = getmaxy();
	x_axis = max_width/2;
	y_axis = max_height/2;

    int x = x_axis;
    int y = y_axis;

	line(x,0,x,max_height);
	line(0,y,max_width,y);
}

void plot_rectangle(int p[])
{
    int x1 = x_axis + p[0];
    int y1 = y_axis + p[1];
    int x2 = x_axis + p[2];
    int y2 = y_axis + p[3];

    rectangle(x1,y1,x2,y2);
}

void plot_line(int p[])
{
    int x1 = x_axis + p[0];
    int y1 = y_axis + p[1];
    int x2 = x_axis + p[2];
    int y2 = y_axis + p[3];

    line(x1,y1,x2,y2);
}

void plot_circle(int p[])
{
    int x = x_axis + p[0];
    int y = y_axis + p[1];
    int r = p[2];

    circle(x,y,r);
}

void reflect_circle(int p[])
{
    int x = 
}

void reflect(int p[])
{
    p[1] *= -1;
    p[3] *= -1;
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
    plot_axes();
    
    int cir[] = {100,50,30};
    plot_circle(cir);
    reflect()

    // int rect[] = {50,50,200,200};

    // plot_rectangle(rect);
    // reflect(rect);
    // plot_rectangle(rect);

    // int l[] = {-100,-100,-200,-200};
    // plot_line(l);
    // reflect(l);
    // plot_line(l);

	getch();
	closegraph();
	return 0;
}