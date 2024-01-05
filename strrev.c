#include<stdio.h>
#include<string.h>
int main()
{
   char a[50];
   printf ("enter a string");
   scanf("%s",&a);
   strrev (a);
   printf("reversed string = %s",a);
   return 0;
   }