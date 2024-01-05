#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("Enter number");
    scanf("%d\n",&n);
    for(i=1;i<=n;i++){
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;

    }
}