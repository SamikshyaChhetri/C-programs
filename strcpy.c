#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter string");
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("destination string is %s",str2); //or puts(str2)
}