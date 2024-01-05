#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{0,2,4},{7,8,2}};
    int i,j,t[3][3];
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            t[j][i]=a[i][j];
        }
        printf("Transpose of given matrix is\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\t%d",t[i][j]);
            }
        
        printf("\n");
        }
    
}
}