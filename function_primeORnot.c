#include<stdio.h>
void primeornot(int a); //function declaration
int main()
{
    int a;
    printf("Enter the number"); //output function
    scanf("%d",&a); //input function
    primeornot(a); //function called
    
    }
    void primeornot(int a) //mathi ko a ko value assign hunxa yesma
    {
        int i,count;
        count=0;
        for(i=0;i<=a;i++)
        {
            if(a%i==0)
            {
                count++;
            }
        }
        if(count==2)
        printf("It is prime");
        else
        printf("It is not a prime");
    }