#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Samikshya";
    int i,j,length;
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }
}
