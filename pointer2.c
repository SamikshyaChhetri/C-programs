#include<stdio.h>
int main()
{
    int a=5;
    int *p;
    int **q;
    p=&a;
    q=&p;
    printf("a=%d\n",**q);
    printf("address of a is %u\n",&a);
    printf("address of q is %u\n", &p);
    printf("Address of p is %u\n",&a);
    printf("value of p is %u\n",*q);
}