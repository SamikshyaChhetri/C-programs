#include<stdio.h>
int main()
{
    int i,sum=0;
    int marks[5];
    float average;
    for(i=0;i<5;i++)
    {
        printf("Enter the marks of subjects"78);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=marks[i];
    }
    average=sum/5 ;
    printf("average marks is %f\n",average);

    
 
}