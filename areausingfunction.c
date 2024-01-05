
/*calculating area of circle using function
documentation section
*/
#include<stdio.h> //link section
#define pi 3.14 //defination section
void area(int r); //global declaration section
int main() //main function
    {
        int r;
        printf("Enter r");
        scanf("%d",&r);
        area(r);
    }
    void area(int r) //sub program
    {
    int A;
    A=2*pi*r;
    printf("Area is %d",A);
    }
    

