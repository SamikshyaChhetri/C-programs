#include<stdio.h>
int main()
{
    char name[10]="Samikshya";
    int i;
    printf("name is : ");
    for(i=0;i<10;i++)
    {
        printf("%c",*(name+i));
    }
}

