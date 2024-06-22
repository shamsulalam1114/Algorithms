#include<bits/stdc++.h>
using namespace std;
void print(int**p,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------------"<<endl;
}

int main()
{
    int row;
    int col;
    cout<<"enter the row and column"<<endl;
    cin>>row>>col;
    int **m=new int *[row];
    for(int i=0;i<row;i++)
    {
        m[i]=new int [col];

    }
    srand(time(0));
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            m[i][j]=rand()%6;
        }
    }
    print(m,row,col);
}

