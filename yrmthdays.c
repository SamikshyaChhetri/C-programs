#include<stdio.h>
int main()
{
    int year,month,week,days=1012;
    year=days/365;
    printf("year is %d\n",year);
    days=(days%365);
    month=days/30;
    printf("month is %d\n",month);
    month=days%30;
    week=(days%30)/7;
    printf("week is %d\n",week);
    
}