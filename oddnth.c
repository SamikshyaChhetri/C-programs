#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    printf("Enter until how many odd num you want");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
            printf("sum is %d\n",sum);
        }
    }
}