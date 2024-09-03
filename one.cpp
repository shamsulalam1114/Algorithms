#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V;
    int E;
    cin>>V>>E;
    vector<int>*adj= new vector<int >[V];
    int u,v;

    //undirected
    for(int i=0;i<E;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    //vector<int>adj[4];
    /*adj.push_back(10);
    adj.push_back(20);
    adj.push_back(30);
    adj.push_back(40);*/

    /*adj[0].push_back(10);
    adj[0].push_back(20);
    adj[0].push_back(20);
    adj[1].push_back(20);
    adj[2].push_back(30);
    adj[3].push_back(40);*/

    for(int i=0;i<4;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++)
        {

        cout<<adj[i][j]<<" ";
        }
        cout<<endl;

  }

}


