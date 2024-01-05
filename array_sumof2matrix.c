#include<stdio.h>
int main()
{
    int matrix1[2][2],matrix2[2][2],sum[2][2],i,j;
    printf("Enter the elements of first matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&matrix1[i][j]);
    }
    printf("first matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%d\t",matrix1[i][j]);
    }
    printf("\n");
}
{
 printf("Enter the elements of second matrix");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&matrix2[i][j]);
    }
    printf("second matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("%d\t",matrix2[i][j]);
    }
    printf("\n");
}
{
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    }
    
        sum[i][j]=matrix1[i][j]+matrix2[i][j];
    
    printf("\nthe sum of matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        printf("\t%d",sum[i][j]);
    }
    printf("\n");

}