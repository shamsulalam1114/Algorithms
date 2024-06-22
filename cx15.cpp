#include <bits/stdc++.h>
using namespace std;
template<typename T>

class Stack {
private:
    int n = 5;
    int top;
    T *s;

public:
    Stack(int n) {
        this->n = n;
        top = -1;
        s = new T[n];
    }

    bool isFull() {
        return top >= n - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(T x) {
        if (isFull()) {
            cout << "Stack is full" << endl;
        } else {
            top++;
            s[top] = x;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            top--;
        }
    }

    int Findtop() {
        return top;
    }

    void printStack() {
        for (int i = top; i >= 0; i--) {
            cout << s[i] << endl;
        }
        cout << "========================" << endl;
    }
};

int main() {
    Stack<int> *a = new Stack<int>(10);
    a->push(10);
    a->push(20);
    a->push(30);
    a->push(40);
    a->push(50);
    a->printStack();
    delete a;


    return 0;
}
