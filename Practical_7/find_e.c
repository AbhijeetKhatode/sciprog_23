// Include necessary library headers for input-output operations and math-related functions
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function to calculate the factorial of a given integer
double factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int i,order;
    double *terms;

    printf("Enter the required polynomial order:\n");
    if (scanf("%d", &order) != 1) {
        printf("Didn't enter a number\n");
        return 1;
    }

    // Allocate memory for the polynomial terms
    terms = malloc(order * sizeof(double));

    // Initialize the polynomial terms
    for (i = 0; i < order; i++) {
        terms[i] = 1.0 / factorial(i + 1);
        printf("e term for order %d is %1.14lf:\n", i + 1, terms[i]);
    }

    // Calculate the estimated value of e using the polynomial
    double e = 1.0;
    for (i = 0; i < order; i++) {
        e += terms[i];
    }

    // Free the allocated memory
    free(terms);

    // Print the estimated value of e and the difference with the actual value
    printf("e is estimated as %lf with difference %e\n", e, e - exp(1.0));

    // Return 0 to indicate successful execution
    return 0;
}

