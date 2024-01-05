#include<stdio.h>
#define row 4
#define col 4
int main()
{
    int a[row][col],i,j,sum;
    printf("enter elements of matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        sum=sum+a[i][j];
        printf("sum of row is %d\n",i+1,sum);
        
    }
}