#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    ofstream fout("avarage.txt");

    for(int i=0;i<40;i++)
    {
        cout<<rand()%100+1<<endl;
        fout<<rand()%100+1<<endl;
    }
}
