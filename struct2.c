#include<stdio.h>
struct employee{
    char name[20];
    char address[20];
    int age;
    int salary;
};
int main(){
    struct employee s[5];
    int i;
    for(i=0;i<5;i++)

{
    printf("Enter the name of employee");
    scanf("%s",&s[i].name);
    printf("\nEnter the address of employee");
    scanf("%s",&s[i].address);
    printf("\nEnter the age of employee");
    scanf("%d",&s[i].age);
    printf("\nEnter the salary of employee");
    scanf("%d",&s[i].salary);
}
printf("record of 5 employee are\t:");
for(i=0;i<5;i++)
{
    printf(" %s\t %s\t %d\t %d\t",s[i].name,s[i].address,s[i].age,s[i].salary);
}
}