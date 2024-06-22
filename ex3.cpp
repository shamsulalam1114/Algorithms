#include <iostream>
using namespace std;

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void shiftList(int *A, int n, int k)
{
    // Perform the right shift k times
    for (int j = 0; j < k; j++)
    {
        // Move elements from right to left
        for (int i = n - 1; i > 0; i--)
        {
            A[i] = A[i - 1];
        }
    }

    // Set the first k elements to 0
    for (int i = 0; i < k; i++)
    {
        A[i] = 0;
    }
}

int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60};
    printArray(a, 6);

    shiftList(a, 6, 3);
    printArray(a, 6);

    return 0;
}
