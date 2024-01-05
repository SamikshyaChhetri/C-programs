#include<stdio.h>
int main()
{
    int a=5,b=6,c=7,d=8,e=9;
    int i;
    int *p[5];
    p[0]=&a;
    p[1]=&b;
    p[2]=&c;
    p[3]=&d;
    p[4]=&e;
    printf("contents in array are\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p[i]);
    }
}