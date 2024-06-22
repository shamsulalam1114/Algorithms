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
void search(int* a1, int size, int n) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (*(a1 + i) == n) {
            cout << "Value found at index: " << i << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Value not found" << endl;
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
    cout << "Enter value to search: ";
    cin >> value;
    search(a1, size, value);
    delete[] a1;
    return 0;
}
