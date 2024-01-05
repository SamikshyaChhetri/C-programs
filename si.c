#include<stdio.h>
int main()
{
    int p,t,r,si;
    printf("enter principle");
    scanf("%d",&p);
    printf("enter rate");
    scanf("%d",&r);
    printf("enter time");
    scanf("%d",&t);
    si=p*t*r/100
    printf("simple interest is %d",si);
    return 0;

}