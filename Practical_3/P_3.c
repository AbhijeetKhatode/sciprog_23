// Include necessary library headers for input-output operations and math-related functions
# include<stdio.h>
# include<math.h>

void main()
{

// Define the number of intervals for the integration
int N=12;

// Define the starting (x_0) and ending (x_12) points for the integration
double x_0=0.0;
double x_12=M_PI/3.0;

// Calculate the width of each interval
double width=(x_12-x_0)/(double)N;

// Initialize summation with tan values at the boundaries
double X=tan(x_12)+tan(x_0);

// Declare variables
double x,y,sum=X;
int i=1;

	// Traverse through each interval, calculating the mid point y as tan(x), adding to the sum
	while (i<12)
	{
		x=x_0+width*i;
		y=tan(x);
		sum += 2*y; // Each mid point contributes twice in the trapezoidal rule
		i++;
	}

// Calculate the integral approximation using the trapezoidal formula
double integral_appro=sum*width*0.5;

// Calculate the exact integral using integral calculus
double integral_exact=log(2.0);

// Print both evaluated and actual integral values for comparison
printf("Your approximation of the integral from x=0 to x=pi/3 of the function tan(x) with respect to x is=\n%.5f\n The exact solution is =\n%.5f\n",integral_appro,integral_exact);


}
