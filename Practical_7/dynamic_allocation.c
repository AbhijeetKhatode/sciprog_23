#include <stdio.h>
#include <stdlib.h>

int i;

// Function to allocate an array of integers
int* allocatearray(int size) 
{
    // Allocate memory for the array using malloc
    int* array = malloc(size * sizeof(int));
    // Return the allocated memory pointer
    return array;
}

// Function to fill an array with ones
void fillwithones(int* array, int size)
{
    // Iterate over the elements of the array
    for (i = 0; i < size; i++) 
	{
        // Set each element to 1
        array[i] = 1;
	}
}

// Function to print an array to the console
void printarray(int* array, int size) 
{
    // Iterate over the elements of the array
    for (i = 0; i < size; i++) 
	{
        // Print each element
        printf("a[%d]:%d\n",i, array[i]);
	}
    printf("\n");
}

// Function to free the allocated memory
void freeMemory(int* array) 
{
    // Free the allocated memory using free function
    free(array);
}

int main() 
{
    // Prompt user to enter the size of the array
    int size;
    printf("Enter the size of the array: ");
    // Read the size from the user and store it in 'size' 
   scanf("%d", &size);

    // Allocate the array using allocatearray
    int* array = allocatearray(size);

    // Fill the array with ones using fillwithones
    fillwithones(array, size);

    // Print the array using printarray
    printarray(array, size);

    // Free the allocated memory using freeMemory
    freeMemory(array);

    return 0;
}

