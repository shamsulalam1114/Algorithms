#include <iostream>
using namespace std;

class Queue {
private:
    int *q;
    int front;
    int rear;
    int capacity;

public:

    Queue(int size) {
        capacity = size;
        q = new int[capacity];
        front = rear = -1;
    }


    ~Queue() {
        delete[] q;
    }


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
};

int main() {
    Queue q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.printQueue();
    q.dequeue();
    q.printQueue();
    return 0;
}
