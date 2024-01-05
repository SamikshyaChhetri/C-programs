#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void DDAline(int x1,int y1,int x2,int y2);
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2;
    initgraph(&gd,&gm,"");
    DDAline(30,60,300,150);
    getch();
    closegraph();
    return 0;
    void DDAline(int x1,int y1,int x2,int y2);
    { int dx, dy, steps, i;
    float xinc,yinc,x,y;
    dx=x2-x1;
    dy=y2-y1
    if(abs(dx)>abs(dy))
    steps=abs(dy);
    else if(abs(dx)<=0)
    steps=abs(dx);
    xinc=dx/steps;
    yinc=dy/steps;
    x=x1;
    y=y1;
    putpixel(x,y,15);
    for(i=0;i<steps;i++)
    {x=x+xinc;
    y=y+yinc;
    putpixel(round(x),round(y),15);
    }
    }
}