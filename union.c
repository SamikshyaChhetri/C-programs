#include<stdio.h>
union student 
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    union student s;
    printf("Enter name");
    scanf("%s",s.name);
    printf("\nName is %s",s.name);
    printf("\tEnter roll number");
    scanf("%d",&s.roll);
    printf("\nRoll number is %d",s.roll);
    printf("\tenter marks");
    scanf("%f",&s.marks);
    printf("\nMarks is %f",s.marks);
}