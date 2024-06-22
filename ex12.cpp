#include <bits/stdc++.h>
using namespace std;

int* addbegining(int* a, int n, int num)
{
    int* b = new int[n + 1];
    b[0] = num;
    for (int i = 0; i < n; i++)b[i + 1] = a[i];

    return b;
}


void printList(int *a, int n)
{
    for (int i = 0; i < n; i++)cout << a[i] << " ";
    cout<<endl;

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
    return -1; // Moved outside the loop
}


int *deleteItem(int *a,int n, int index)
{
    int *b=new int[n-1];
    for(int i=0;i<index;i++)b[i]=a[i];
    for(int i=index;i<n-1;i++)b[i]=a[i+1];
    return b;
}


int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printList(a,5);

    int * p = addbegining(a,5,100);
    printList(p,6);
    int index= Search (a,5,30);
    cout<<index<<endl;
    int *l=deleteItem(a,6,index);
    printList(p,5);


    /*int mergedSize[9];
    int* mergedArray = new int[9];
    for (int i = 0; i < 5; i++) mergedArray[i] = a[i];
    for (int i = 0; i < 6; i++) mergedArray[i + 5] = l[i];
    printList(mergedArray, 9);*/


    return 0;

}
