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
    for (int i = 0; i < size - 1; i++) {
        int k = i;
        for (int j = i + 1; j < size; j++) {
            if (*(a1 + j) < *(a1 + k)) {
                k = j;
            }
        }
        int temp = *(a1 + i);
        *(a1 + i) = *(a1 + k);
        *(a1 + k) = temp;
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

    cout << "Selection sorted array: ";
    print(a1, size);

    delete[] a1;
    return 0;
}
