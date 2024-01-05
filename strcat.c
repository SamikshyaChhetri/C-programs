#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter string 1 and 2");
    scanf("%s%s",&str1,&str2);
    strcat(str1,str2);
    printf("%s",str1);
    //puts(str1 );
    
}