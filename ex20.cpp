#include <bits/stdc++.h>
using namespace std;
void printList(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }
}

void Average(int *p, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum =sum+ p[i];
    }
    cout<<"Average:"<<sum/n;
}

void bonus(int *p, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<p[i]+5<<endl;
    }

}

int main()
{
    int n=40;
    int *a=new int[n];


    ifstream fin("avarage.txt");

    for(int i=0;i<n;i++)
    {

        fin>>a[i];
    }
    cout<<endl;
    printList(a,n);
    cout<<endl;
    Average(a,n);
    cout<<endl;
    cout<<"after bonus"<<endl;
    bonus(a,n);
    cout<<endl;

    return 0;
}
