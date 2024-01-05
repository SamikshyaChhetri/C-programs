#include<stdio.h>
int main()
{
    int matrix[2][4],i,j;
    printf("Enter the matrix element\t");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&matrix[i][j]);

        }
    }
    printf("\nThe entered matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
    
    printf("\n");
    }
}