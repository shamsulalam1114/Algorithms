
#include<bits/stdc++.h>

using namespace std;

int n=5;

    int top=-1;

    int *Stack =new int[n];

    bool isFull()

    {

        return top>=n-1;

    }

    bool isEmpty()

    {

        return top==-1?true:false;

    }

void push(int x)

{

    if(isFull())

    {

        cout<<"Stack is full"<<endl;

    }

    else{top++;

Stack[top]=x;

}

}

void pop()

{

    if(isEmpty())

    {

        cout<<"Stack is empty"<<endl;

    }

    top--;

}
int Findtop()
{
    return top;
}

void printStack()

{

    for(int i=top;i>=0;i--)  cout<<Stack[i]<<endl;

    cout<<"========================"<<endl;

}

int main()

{

    push(10);

    push(20);

    push(30);

    push(40);

    push(50);

    push(60);

    printStack();

    pop();

    pop();

    pop();

    pop();



     printStack();
     cout<<Findtop()<<endl;

}
