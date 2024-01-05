#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,x;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    x=add(a,b);
    printf("Sum of two numbers is %d",x);
}
int add(int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
    
}