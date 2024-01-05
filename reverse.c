#include<stdio.h>
int main()
{
    int num,a;
    printf("Enter the number");
    scanf("%d",&num);
    a=num%10;
    printf("%d",a);
    num=num/10;
    printf("%d",a);
    num=num/10;
    printf("%d",num);
    return 0; 

}