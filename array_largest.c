#include<stdio.h>
int main()
{
    int i,a[100],n,temp=0;
    printf("Enter number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i-1]>temp)
        {
            temp=a[i-1];
        }
    }
    printf("Largest is %d",temp);
}