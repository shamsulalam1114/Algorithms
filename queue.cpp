#include <iostream>
using namespace std;


const int capacity = 10;
int front = -1;
int rear = -1;
int q[capacity];


bool isFull() {
    return rear == capacity - 1;
}

bool isEmpty() {
    return front == rear;
}


void enqueue(int x) {
    if (isFull()) {
        cout << "Queue is full" << endl;
    } else {
        rear++;
        q[rear] = x;
    }
}


void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        front++;
    }
}


void printQueue() {
    for (int i = front + 1; i <= rear; i++) {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printQueue();
    dequeue();
    printQueue();
    return 0;
}
