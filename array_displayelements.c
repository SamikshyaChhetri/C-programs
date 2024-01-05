#include<stdio.h>
int main()
{
    int a[5],i;
    
    printf("Enter numbers of array");
    for(i=0;i<5;i++)
    {
    scanf("%d\t",&a[i]);
    }
    printf("Entered element of array is %d\t",a[i]);
    for(i=0;i<5;i++)
    {
        printf("\ta[%d]=%d",i,a[i]);
    }
   
}