#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    float per;
};
int main()
{

struct student s[50];
int i,n;
printf("Enter no of students");
scanf("%d",&n);
for(i=0;i<n;i++)
printf("Enter name:);
scanf("%s", s[i].name);
printf("Enter roll number");
scanf("%d",&s[i].roll);
printf("Enter percentage");
scanf("%f",&s[i].per);
printf("\nDetails of students are:");

 if(s[i].per>60)
    printf("Name is %s\n Roll no. is %d\n percentage is %f\n",s[i].name,s[i].roll,s[i].per);
}
