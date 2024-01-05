#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *fp;
    fp = fopen("tst.text", "r");
    char content[1000];
    if(fp==NULL)
    {
        //fgets(content,1000,fp);
        printf("error");
    }
    else
    {
        fgets(content,1000,fp);
        printf("%s",content);
    }
}

    
   