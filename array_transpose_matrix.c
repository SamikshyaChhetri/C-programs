// Program to find transpose of a matrix

#include <stdio.h>

#define M 3

#define N 3

int main()

{

int matrix[M][N],transpose[N][M],i,j;


printf("\nEnter the elements of matrix:\t");

for(i=0;i<M;i++)

{

for(j=0;j<N;j++)

{

scanf("%d", &matrix[i][j]);

}

}

printf("\nThe matrix to be transposed is:\n");

for(i=0;i<M;i++)

{

for(j=0;j<N;j++)

{

printf("%d\t", matrix[i][j]);

}

printf("\n");

}



/*finding transpose matrix*/

for(i=0;i<M;i++)

{

for(j=0;j<N;j++)

{

transpose[j][i]=matrix[i][j];

}

}

printf("\nThe transpose matrix is:\n");

for(i=0;i<M;i++)

{

for(j=0;j<N;j++)

{

printf("%d\t",transpose[i][j]);

}

printf("\n");

}


}