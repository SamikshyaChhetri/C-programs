#include<stdio.h>
int main()
{
    int matrix[][3]={12,15,18,9,16},i,j;
    printf("The entered matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}