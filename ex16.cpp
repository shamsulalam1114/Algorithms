#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int **matrix;

public:

    Matrix(int rows, int cols) {
        this->rows = rows;
        this->cols = cols;
        matrix = new int*[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
    }





    void print() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        cout << "--------------------" << endl;
    }
};

int main() {
    Matrix m1(3, 3);
    m1.print();

    Matrix m2(5, 2);
    m2.print();

    return 0;
}
