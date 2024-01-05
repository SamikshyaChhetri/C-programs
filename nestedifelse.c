#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(b>c)
        printf("largest number is %d",a);
        else if (c>b)
        {
            printf("largest number is %d",c);
        }
        else
           {
                printf("largest number is %d",b);
        
           }
    }
}