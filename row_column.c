#include<stdio.h>
int main()
{
    int a[3][3],i,j,sumrow,sumcol;
    printf("enter matrix: \t");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sumrow=sumcol=0;
        for(j=0;j<3;j++)
    {
        sumrow=sumrow+a[i][j];
        sumcol+=a[j][i];
    }
    printf("sum of row= %d\t, sum of column= %d\t,sumrow,sumcol");
}
}