// Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}
/ Include necessary library headers for input-output operations and math-related functions
#include<stdio.h>
#include<math.h>

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta);

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x);

int main()
{
	double delta,x;

    // Ask user to enter the precision for the Maclaurin series
	printf("Enter the precision for the Maclaurin series:\n");
	scanf("%lf",&delta);
	
    // Define the length of the Maclaurin series
	int length=1000;

    // Declare arrays for tan1 and tan2 values
	double tan1[length],tan2[length];

    // Initialize the values of tan1 and tan2
	int j=0;
	x=-0.9;
	while(x<=0.9 && j<length)
	{
		tan1[j]=arctanh1(x,delta);
		tan2[j]=arctanh2(x);
		printf("The difference at x=%lf between them is %.10lf.\n",x,fabs(tan1[j] - tan2[j]));


	}
return 0;

}

// Function to calculate arctanh(x) using a numerical method
double arctanh1(const double x, const double delta)
{
    // Initialize the value of arcTan to 0
	double arcTan=0;
	double elem,val;
	int n=0;

    // Iterate until the result converges to the desired precision
	do
	{
        // Calculate the next term in the Maclaurin series
	val=2*n+1;
	elem=pow(x,val)/val;
	arcTan +=elem;
	n++;
	}

	while(fabs(elem)>=delta);
    // Return the final value of arcTan
	return arcTan;
}

// Function to calculate arctanh(x) directly using the formula
double arctanh2(const double x)
	{
    // Return the value of arctanh(x) directly using the formula
	return (log(1+x)-log(1-x))/2;
	}

