//Program to add two m*n matrices using pointer
#include<stdio.h>

#define m 2

#define n 3

int main()

{

int (*a)[n], (*b)[n], (*sum)[n], i, j;


printf("Input first matrix elements of order %d*%d:\n", m, n);

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

scanf("%d",*(a+i)+j);

}

printf("\nThe first matrix is:\n");

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

printf(" %d\t",*(*(a+i)+j));

printf("\n");

}
printf("Input second of order %d*%d:\n", m, n);

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

scanf("%d",*(b+i)+j);

}

printf("\nThe second matrix is:\n");

for(i=0;i<m;i++)

{

for(j=0;j<n;j++)

{

printf(" %d\t",*(*(b+i)+j));

}

printf("\n");

}
}