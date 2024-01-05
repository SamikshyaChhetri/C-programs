#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE * fPtr;
    char ch;

    fPtr = fopen("output.txt", "r");
    
    if(fPtr == NULL){
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    do 
    {
        ch = fgetc(fPtr);
        putchar(ch);
    } while(ch != EOF);

    fclose(fPtr);

    return 0;
}