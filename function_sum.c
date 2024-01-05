#include<stdio.h>
void sum(float,float);
int main()
{
    float a,b;
    printf("Enter the value of a and b");
    scanf("%f%f",&a,&b);
    sum(a,b);
}
void sum(float x,float y)
{
    float s=0;
    s=x+y;
    printf("sum is %f",s);
}