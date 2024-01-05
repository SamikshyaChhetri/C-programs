#include<stdio.h>
int main()
{
    char a = 'B';
   printf("%d",a); //implicite type conversion

   int x=6;
   float y=7.97;
   float c=x+(int)y; //explicite type conversion
   printf("\n%f",c);

}
