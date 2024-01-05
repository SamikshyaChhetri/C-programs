#include<stdio.h>
void lowertoupper(char*);
int main()
{
    char lower;
    printf("Input lower case characters");
    scanf("%c",&lower);
    lowertoupper(&lower);
    printf("\nthe equivalent upper case character is %c",lower);

}
void lowertoupper(char *c)
{
    if(*c>=97 && *c<=122)
    *c=*c-32;
}