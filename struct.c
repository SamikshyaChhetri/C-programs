#include<stdio.h>

struct Student{
    char name[20];
    int roll;
    int percentage;
};

int main(){

    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for( i = 0; i < n; i++ ){
        printf("Enter %d Student Name, Roll No and Percentage: \n", i + 1);
        scanf("%s%d%d", &s[i].name, &s[i].roll, &s[i].percentage);
    }

    printf("Students which have percenatge greater than 60 are : \n");
    for(int i = 0; i < n; i++){
        if( s[i].percentage >= 60 ){
            printf("%s\n", s[i].name);
        }
    }

}