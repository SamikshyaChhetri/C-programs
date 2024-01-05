#include <stdio.h>
#include<string.h>

int main(){
    char name[100];
    printf("Hello, User! What name should I call you?");
    scanf("%c", &name);
    int length=strlen(name);
    
    if (length <= 2) {
        printf("Nope, Your name has to be atleast 3 characters!");
    } else {
        printf("Oh, Hi, %s!", name);
    }
}