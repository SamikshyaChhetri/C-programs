#include<stdio.h>
int main()
{
    int l,b,h,area,volume;
    printf("Enter the value of l");
    scanf("%d",&l);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of h");
    scanf("%d",&h);
    area=l*b;
    printf("Area of rectangle is %d\n",area);
    volume=l*b*h;
    printf("Volume of rectangle is %d\n",volume);
    return 0;
}