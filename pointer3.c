#include<stdio.h>
int main()
{
    int a=5;
    float b=3.5;
    void *p;
    p=&a;
    printf("value of a is %d\n",*((int*)p));
    p=&b;
    printf("value of b is %f\n",*((float*)p));
}