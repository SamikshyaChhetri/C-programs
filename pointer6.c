#include<stdio.h>
int main()
{
    int a[5]= {2,3,4,7,8}; 
    int i;
    int *p[5];

    for(i=0;i<5;i++)
    {
        p[i] = &a[i];
    }
    printf("Content of array\n");
    for(i=0;i<5;i++)
    {
        printf("[%d]=%d",i,*p[i]);
    }
}