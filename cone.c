#include<stdio.h>
#define pi 3.14
int main()
{
    float r,h,volume;
    printf("enter the value of radius");
    scanf("%f",&r);
    printf("enter the value of height");
    scanf("%f",&h);
    volume=(1/3)*pi*r*r*h;
    printf("volume of cone is %f",volume);
}
