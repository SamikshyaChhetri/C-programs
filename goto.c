#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<5;i++){
        if(i==3)
        goto sam;
        printf("%d\n",i);
    }
    sam:
    printf("NEHA KAKKAR");

}