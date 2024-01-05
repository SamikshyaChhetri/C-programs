#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float per;

};
int main()
{
    struct student s[100];
    int n,i;
    printf("Enter n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter name student\n");
        scanf("%s",s[i].name);
        printf("Enter roll student\n");
        scanf("%d",&s[i].roll);
        printf("Enter percentage student");
        scanf("%f",&s[i].per);
    }
    printf("students with Percentage greater than 60 are:-\n ");
    for(i=0;i<n;i++)
    if(s[i].per>=60)
    printf("\nName=%s \nroll=%d \npercentage=%f",s[i].name,s[i].roll,s[i].per);
    
}