#include <iostream>
using namespace std;

int arrayMax(int* A, int n) {
    // Ensure the input array has at least one element
    if (n <= 0) {
        cerr << "Array must have at least one element." << endl;
        return -1; // Return a sentinel value indicating error
    }

    // Initialize currentMax with the first element of the array
    int currentMax = A[0];

    // Loop through the array starting from the second element
    for (int i = 1; i < n; ++i) {
        // If the current element is greater than currentMax, update currentMax
        if (currentMax < A[i]) {
            currentMax = A[i];
        }
    }

    // Return the maximum element found in the array
    return currentMax;
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* A = new int[n];

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    // Find the maximum element in the array
    int maxElement = arrayMax(A, n);

    // Output the maximum element
    cout << "The maximum element in the array is: " << maxElement << endl;

    // Free the dynamically allocated memory
    delete[] A;

    return 0;
}
