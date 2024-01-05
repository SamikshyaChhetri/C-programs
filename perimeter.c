#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("enter the value of length");
    scanf("%d",&l);
    printf("enter the value of breadth");
    scanf("%d",&b);
    area= l*b;
    printf("the area of rectangle is %d\n",area);
    perimeter=2*(l+b);
    printf("perimeter of rectangle is %d\n",perimeter);

}