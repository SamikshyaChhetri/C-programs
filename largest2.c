#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is largest num");
    }
    else if(b>a&&b>c)
    {
        printf("b is largest num");
    }
    else if(c>a&&c>b)
    printf("C is largest");

}
