#include<stdio.h>
int main()
{
    int a[5]={2,4,6,3,1};
    int *p[5];
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        p[i]=&a[i];
    }
    for(i=0;i<5-1;i++)
        {
            for(j=0;j<5-1-i;j++)
        
            if(*p[j]>*p[j+1])
            {
                temp=*p[j];
                *p[j]=*p[j+1];
                *p[j+1]=temp;
            }
        }
        printf("sorted elements are\n");
        for(i=0;i<5;i++)
        {
            printf("%d\n",*p[i]);
        }
    

    }
