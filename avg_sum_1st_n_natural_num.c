#include<stdio.h>
int main()
{
    int i,avg,n,num,sum=0;
    printf("Enter the number you want to sum & find avgerage");
    scanf("%d",&n);
    printf("First %d natural num are",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        sum+=num ;
        avg=sum/n ;
    }
        printf("sum=%d\n",sum);
        printf("avgerage=%d\n",avg);
    
}