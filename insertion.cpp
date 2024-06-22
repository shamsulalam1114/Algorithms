#include<iostream>
using namespace std;
void insert(int* a1, int size) {
    cout << "Enter the values: \n";
    for (int i = 0; i < size; i++) {
        cin >> *(a1 + i);
    }
}

void print(int* a1, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(a1 + i) << " ";
    }
    cout << endl;
}
void sort(int* a1, int size) {
    for (int i = 1; i < size; i++) {
        int k = *(a1 + i);
        int j = i - 1;
        while (j >= 0 && *(a1 + j) > k) {
            *(a1 + j + 1) = *(a1 + j);
            j = j - 1;
        }
        *(a1 + j + 1) = k;
    }
}

int main() {
    int size, value;
    cout << "Enter array size: ";
    cin >> size;
    int* a1 = new int[size];

    insert(a1, size);

    cout << "Original array: ";
    print(a1, size);
    sort(a1, size);

    cout << "Array after sort: ";
    print(a1, size);

    delete[] a1;
    return 0;
}
