#include<stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int sum[2][2];
    int i,j;
    printf("enter the element in the array");
    for(i=0;i<2;i++)
    
        for(j=0;j<2;j++)
        {

            scanf("%d",*(a+i)+j);
        }
            
        printf("Elements in array is: \n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d\t",*(*(a+i)+j));
            }
        
        printf("\n");
        }
    
}