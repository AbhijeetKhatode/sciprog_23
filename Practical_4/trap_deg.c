// Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Define a constant for the number of intervals and an array to store the tangent values 
int N=12;
double TanValues[13];

// Function prototype declarations
double degtorad(double deg);
double Traprule(int N);

void main()
{
    // Declare variables
	int i;
	double rad,deg;
	
    // Compute and store tangent values at each required angle (at increments of 5 degrees)
	for (i=0;i<N;i++)
	{
		deg=i*5.0;
		rad=degtorad(deg);
		TanValues[i]=tan(rad);
	
	}

    // Call the trapezoidal rule function to calculate the approximate integral
	double integral_approx=Traprule(N);

    // Calculate the exact integral using the built-in log function
	double integral_exact=log(2.0);

    // Print both evaluated and actual integral values for comparison	
	printf("Your approximation of integral from x=0 degrees to x=60 degrees of the function tan(x) with respect to x is:\n%3f\n The exact solution is:\n%3f\n", integral_approx, integral_exact);

}

// Function to convert degrees to radians 
double degtorad(double deg)
{
	return (deg*M_PI)/180.0;

}

// Function to apply the trapezoidal rule for numerical integration
double Traprule(int N)
{
	int i;
	double width, area = TanValues[0] + TanValues[N];

    // Compute the sum of the given function values at specified points according to the trapezoidal rule
	for(i=0;i<N;i++)
	{	
		area += 2.0 * TanValues[i];
	
	}

    // Determine the width of each sub-interval
	width = degtorad((60.0-0)/(2.0*N));

    // Compute and return the approximate area (i.e., integral)
	area = width * area;
	return area;
}
