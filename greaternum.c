#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    printf("Greater number is %d",a);
    else if (b>a && b>c)
    {
    printf("Greater number is %d",b);
    }
    else
   {
        printf("Greater number is %d",c);
   }


}