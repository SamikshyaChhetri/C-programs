#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&fg,&gm,"C:\TC\BGI");
    circle(100,100,50);
    closrgraph();
    return 0;
}
