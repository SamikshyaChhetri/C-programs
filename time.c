#include<stdio.h>
#include<time.h>
int main()
{
    time_t t=time(NULL);
    printf("\ncurrent date and time is %s",ctime(&t));
}