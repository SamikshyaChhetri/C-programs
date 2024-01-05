#include<stdio.h>
void divisible(int a);//function declaration
int main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    divisible(a);//function calling

}
void divisible(int a)
{
    if(a%2==0)
    printf("It is divisible by 2");
    else
printf("not divisible by 2");
}

