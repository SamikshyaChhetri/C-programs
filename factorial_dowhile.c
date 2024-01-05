#include<stdio.h>
int main()
{
    int i=1,num,fact=1;
    printf("Enter num");
    scanf("%d",&num);
    do
    {
        fact*=i;
        //printf("Factorial is %d\n",fact);
        i++;
    } while (i<=num);
    printf("Factorial is %d\n",fact);
    
}