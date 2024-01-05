#include<stdio.h>
void factorial(int a);
int main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    factorial(a);
}
void factorial(int a);
{
    int i,fact;
    fact=1;
    for(i=0;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("The factorial is %d",fact);
}
