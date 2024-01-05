#include<stdio.h>
int add(int x,int y);
int main()
{
    int x,y;
    printf("Enter numbers\n");
    scanf("%d%d",&x,&y);
    add(x,y);
    return 0;
}
int add(int x,int y)
{
    int sum;
    sum=x+y;
    printf("The sum is %d\n",sum);
}





