#include<stdio.h>
int main()
{
    int a[][3]={1,2,3,5,4,2},i,j,k;
    int b[][2]={2,1,5,7,3,0},sum;
    int c[2][3]; 
    //for(i=0;i<2;i++)
    {
    printf("The entered first matrix is \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
{
printf("The entered second matrix is \n");
for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d\t",b[i][j]);
    }
    printf("\n");
}
}
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
        sum=0;
        for(k=0;k<3;k++)
        {
            sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
    }
}
printf("Multiplication of matrix is \n");
 for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}