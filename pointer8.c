#include<stdio.h>
int main()
{
    int a=10,b=9;
    int *p,*q;
    int c=*q;
    p=&a;
    q=&b;
    printf("Value of a=%d\n",a);
    printf("Value of a=%d\n",*p);
    printf("c=%d",c);
    printf("a=%d",a);
    
}