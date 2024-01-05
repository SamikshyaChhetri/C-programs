//program to check if you can vote or not//

#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if (age>18)
    printf("You are elligible to vote");
    else
    printf("You are not elligible to vote");
    return 0;
}