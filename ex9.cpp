#include <bits/stdc++.h>
using namespace std;

int* addbegining(int* a, int n, int num)
{
    int* b = new int[n + 1];
    b[0] = num;
    for (int i = 0; i < n; i++) b[i + 1] = a[i];
    return b;
}

void printList(int *a, int n)
{
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

int Search(int* a, int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int* deleteItem(int* a, int n, int index)
{
    int* b = new int[n - 1];
    for (int i = 0; i < index; i++) b[i] = a[i];
    for (int i = index; i < n - 1; i++) b[i] = a[i + 1];
    return b;
}

int* mergeList(int* a, int n1, int* b, int n2)
{
    int* merged = new int[n1 + n2];
    for (int i = 0; i < n1; i++) merged[i] = a[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = b[i];
    return merged;
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printList(a, 5);

    int* p = addbegining(a, 5, 100);
    printList(p, 6);

    int index = Search(a, 5, 30);
    cout << index << endl;

    int* l = deleteItem(a, 5, index); // Corrected from 6 to 5
    printList(l, 4);

    int b[5] = {1, 2, 3, 4, 5}; // Example second list to merge
    int* m = mergeList(p, 6, b, 5);
    printList(m, 11);

    // Free the dynamically allocated memory
    delete[] p;
    delete[] l;
    delete[] m;

    return 0;
}
