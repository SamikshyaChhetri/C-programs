#include<stdio.h>
int main()
{
    int a[2][2],i,j;
    printf("Enter matrix elements");
    //scanf("%d",&a[i][j]);
    for(i=0;i<2;i++)

        for(j=0;j<2;j++)
     scanf("%d",&a[i][j]);
    {
        //for(j=0;j<2;j++)
        printf("matrix is:\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            printf("%d\t",a[i][j]);

        }
    }
        printf("\n");
}