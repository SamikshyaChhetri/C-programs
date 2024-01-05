#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2]={{1,2},{4,5}};
    int b[2][2]={{1,2},{4,5}};
    int count=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                count ++;
            }
        }
    }
    if (count>=1)    
    printf("They are not identical\n");
    else
    printf("They are identical\n");
    
    return 0;
}

