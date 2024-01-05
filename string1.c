#include<stdio.h>
#include<string.h>n
int main()
{
    char str[20];
    int length;
    printf("Enter string");
    scanf("%s",&str);
    length=strlen(str);
    printf("Length is %d",length);
}