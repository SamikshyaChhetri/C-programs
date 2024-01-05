#include<stdio.h>
int main()
{
      int i,n,factorial=1;
      printf("ENter number");
      scanf("%d\n",&n);
      for(i=1;i<=n;i++)
      {
      factorial*=i;
      }
      printf("The value of factorial %d is %d",n,factorial);
}