#include<stdio.h>
int main()
{
    int i,j,num;
    printf("enter num");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        int count=0;
        for(j=1;j<=num;j++)
        if(i%j==0)
        count++;
    
    if(count==2)
    printf("\nprime num are %d\t",i);
    else if(count>2)
    printf("\n composite num are %d\t",i);
    }
}