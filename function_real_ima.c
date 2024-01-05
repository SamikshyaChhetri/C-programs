#include<stdio.h>
#include<math.h>
void realORima(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("Enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    realORima(a,b,c);
}
void realORima(int a,int b,int c);
{
    if(b*b-(4*a*c)>0)
    {
    printf("The root is real");
    }
    else 
    {
    printf("The root is imaginary");
    }
}