#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,2}};
    int b[2][2]={{3,4},{0,1}};
    int sum[2][2],i,j;
    {
        for(i=0;i<2;i++)
    
            for(j=0;j<2;j++)
        
            sum[i][j]=a[i][j]+b[i][j];
        
    }
    printf("\nsum of matrix is:\n ");

    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        printf("\t%d",sum[i][j]);
    }
    
    printf("\n");
    }
}
