#include<stdio.h>
void check(int a);
int main()
{
    int a;
    printf("enter the number a");
    scanf("%d",&a);
    check(a);
}
void check(int a)
{
    if(a%2==1)
    printf("%d is odd",a);

else

    printf("%d is even",a);
}
