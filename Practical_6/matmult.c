// Include standard input/output library
#include<stdio.h>

int main()
{

// Define basic variables and arrays for the calculations
int n=5,p=3,q=4,i,j,k; // Number of rows and columns in the matrices
double A[n][p],B[p][q],C[n][q];// Matrix variables for the calculations
    
    // Initialising the values of Matrix A where each element is the sum of its indices.
	for (i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
		A[i][j]=i+j;
		}

    // Initialising the values of Matrix B where each element is the difference of its indices.	
	}
	for (i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		B[i][j]=i-j;
		}
	
	}

    // Initialising the values of Matrix C to zeroes initially.
	for (i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
		C[i][j]=0.0;
		}
	
	}


// Perform the matrix multiplication
matmult(n,p,q,A,B,C);

// Print the matrix A
printf("Matrix A:\n");
for(i=0;i<n;i++)
{
	for(j=0;j<p;j++)
	{
	printf("%3.0f",A[i][j]);
	}
	printf("\n");
}

// Print the matrix B
printf("Matrix B:\n");
for(i=0;i<p;i++)
{	for(j=0;j<q;j++)
	{
	printf("%3.0f",B[i][j]);
	}
	printf("\n");
}

// Print the matrix C
printf("Matrix C:\n");
for(i=0;i<n;i++)
{	for(j=0;j<q;j++)
	{
	printf("%3.0f",C[i][j]);
	}
printf("\n");
}

}

