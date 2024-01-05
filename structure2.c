#include<stdio.h>
struct student
{
    int r,i;
    char name[10];
};
void main()
{
    struct student s[13];
    for(i=0;i<3;i++)
    {
        printf("Information of student: %d",i+1);
        printf("Enter the roll number\n");
        scanf("%d",&s[i].r);
        printf("Enter the name of student\n");
        scanf("%s",s[i].name);
        for(i=0;i<3;i++)
    }
    print("information of the student",i+1);
    printf("Roll no %d\n name: %s",s[i].r,s[i].name);

}