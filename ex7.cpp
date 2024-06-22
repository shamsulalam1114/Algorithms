#include <iostream>
using namespace std;

// Function to print the array
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Function to rotate the array to the right by k positions
void rotateRight(int *A, int n, int k)
{
    int temp[n]; // Create a temporary array of the same size as A

    // Loop to fill the temporary array with the rotated elements
    for (int i = 0; i < n; i++)
    {
        // Calculate the new index for each element after rotating right by k positions
        temp[(i + k) % n] = A[i];
    }

    // Loop to copy the elements from the temporary array back to the original array
    for (int i = 0; i < n; i++)
    {
        A[i] = temp[i]; // Copy each element from temp to A
    }
}

int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60}; // Declare and initialize the array
    printArray(a, 6); // Print the original array

    rotateRight(a, 6, 4); // Rotate the array elements to the right by 3 positions
    printArray(a, 6); // Print the array after rotating

    return 0;
}
