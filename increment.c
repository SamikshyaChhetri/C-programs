#include<stdio.h>
int main()
{
    int x,a=2,b=3;
    x=a++ + b++;
    printf("value of a is %d\n",a);
    printf("value of b is %d\n",b);
    printf("value of x is %d\n",x);
    printf("value of x is %d\n",++a + b++);
    printf("value of x is %d\n", a-- + b++);
    printf("value of x is %d\n",a++ + ++b);
}