#include<stdio.h>
int main()
{
    int x,y,sum,difference,product,division;
    printf("Enter the first number");
    scanf("%d",&x);
    printf("Enter the second number");
    scanf("%d",&y);
    sum=x+y;
    printf("Sum of x and y is %d\n",sum);
    difference=x-y;
    printf("Difference of x and y is %d\n",difference);
    product=x*y;
    printf("Product of x and y is %d\n",product);
    division=x/y;
    printf("Division of x and y is %d\n",division);
    return 0;
}