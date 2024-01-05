#include<stdio.h>
int main()
{
    int a,b;
    int q;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Enter the operator\n 1.addition\n 2.substraction\n 3.multiplication\n 4.division\n");
    scanf("%d",&q);
    switch(q){
    case 1:
    printf("The sum is %d\n",a+b);
    break;
    case 2:
    printf("The difference is %d\n",a-b);
    break;
    case 3:
    printf("The product is %d\n",a*b);
    break;
    case 4:
    printf("The division is %d\n",a/b);
    break;
    default:
    printf("Invalid operator\n");
    }
    //return 0;

}
