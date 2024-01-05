#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=6;i++) //rows
    {
        for(j=5;j>i;j--) //left side gap
       { 
           printf(" ");
       }
    
     for(k=1;k<=i;k++) //middle gap & *
    
    {
    printf("N ");
    }

    printf("\n");
}
}
