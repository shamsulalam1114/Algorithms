
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

// Function to delete an item from the array at index i
void deleteItem(int *A, int &n, int i)
{
    if (i < 0 || i >= n)
    {
        cout << "Index out of bounds" << endl;
        return;
    }

    // Shift elements to the left starting from index i
    for (int j = i; j < n - 1; j++)
    {
        A[j] = A[j + 1];
    }

    // Decrease the size of the array by 1
    n--;
}

int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60}; // Declare and initialize the array
    int n = 6; // Size of the array
    printArray(a, n); // Print the original array

    deleteItem(a, n, 2); // Delete the item at index 2
    printArray(a, n); // Print the array after deletion

    return 0;
}

