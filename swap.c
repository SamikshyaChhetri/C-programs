#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    printf("\nBefore swap a=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swap a=%d and b=%d",a,b);
}