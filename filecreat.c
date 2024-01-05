#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("test.text","w");
    if(fp==NULL)
    {
        printf("ERROR!");
        exit(1);
    }
    else
    {
        printf("File is created");

    }
    fputs("I study CSIT",fp);
    fclose(fp);
}