#include<stdio.h>
int main()
{
    int n,i,temp,a[100];
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter elements");

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    {
        for(i=0;i<n;i++)
        if(a[i]>temp)
        {
            temp=a[i-1];
        }
    }
    printf("Largest is %d",temp);

}