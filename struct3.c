#include <stdio.h>
#include <string.h>

struct student {
    int credit_hour;
    char name[10];
    char code[10];
};

int main(){

    int i;
    struct student st[5];

    printf("Enter Records of 5 courses:\n");
    for (i = 0; i < 5; i++){
        printf("\nEnter Subject Name: ");
        scanf("%s", &st[i].name);

        printf("Enter Subject Code: ");
        scanf("%s", &st[i].code);

        printf("Enter Credit Hour: ");
        scanf("%d", &st[i].credit_hour);

        printf("\n");
    }

    printf("\n\nCourse Information List:\n");
    for (i = 0; i < 5; i++){

        if( st[i].credit_hour > 3 ){
            printf("\nSubject Name:%s, Subject Code:%s, Subject Credit Hour:%d\n", st[i].name, st[i].code, st[i].credit_hour);
        }
    }

    return 0;
}