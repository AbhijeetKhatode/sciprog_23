// include standard input-output library
#include<stdio.h>

// function to find greatest common divisor using iteration
int gcd_iteration(int a,int b)
{
    // initialize variables
	int temp;
\
    // loop until b is 0
	while (b!=0)
	{
        // update a and b
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

// function to find greatest common divisor using recursion
int gcd_recursive(int a, int b)
{
    // if b is 0, return a
	if (b==0)
	{
		return a;
	}

    // otherwise, recursively call the function with b and a % b
		return gcd_recursive(b,a%b);
}

void main()
{
    // get user input for a and b
	int a,b;
	printf("Please enter a positive integer a :\n");
	scanf("%d",&a);

	if(a<=0)
	{
	printf("This integer is not positive, aborting");
	}

	printf("Please enter a positive integer b :\n");
	scanf("%d",&b);
	
	if(b<=0)
	{
	printf("This integer is not positive, aborting");
	}

    // call the recursive function to find the greatest common divisor
	int ans_r=gcd_recursive(a,b);

    // call the iterative function to find the greatest common divisor
	int ans_i=gcd_iteration(a,b);

    // Print the results
	printf("Using iteration, we get the answer: %d\n",ans_i);
	printf("Using recursion, we get the answer: %d\n",ans_r);
}	
