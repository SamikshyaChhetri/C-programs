#include<stdio.h>
int main()
{
    int a=5;
    int *p;
    p=&a;
    printf("value of a is  %d\n",*p);
    printf("Address of a is %u\n",p);
    printf("Value of a is %d\n", *(&a));
    printf("address of a is %u\n", &a);
    printf("adress of p is %u\n",&p);
}