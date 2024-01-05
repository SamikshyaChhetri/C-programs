#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5},i;
printf("Content in array are\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",*a+i);
    }
}