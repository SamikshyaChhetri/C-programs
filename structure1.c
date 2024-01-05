#include<stdio.h>
struct student
{
    int roll_num;
    char name[20];
    char sec;
};
int main()
{
    struct student s1,s2;
    s1.roll_num=10;
    printf("Enter the roll no. of s2\n");
    scanf("%d",&s2.roll_num);
    printf("Enter the name of student2\n");
    scanf("%s",s2.name);
    fflush(stdin);
    printf("Enter the section of student2\n");
    scanf("%c",&s2.sec);
    printf("Roll_num=%d\t name=%s\t sec=%c",s2.roll_num,s2.name,s2.sec);

}