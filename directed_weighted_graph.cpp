#include<bits/stdc++.h>
using namespace std;

int main()
{
    int V, E;
    cin >> V >> E;

    // Adjacency list where each element is a vector of destination vertices
    vector<int>* adj = new vector<int>[V];
    // Adjacency list where each element is a vector of weights corresponding to the edges
    vector<int>* weights = new vector<int>[V];

    int u, v, w;

    // Directed and weighted graph
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back(v);       // Add destination vertex
        weights[u].push_back(w);    // Add corresponding weight
    }

    // Print the adjacency list representation of the graph
    for (int i = 0; i < V; i++)
    {
        cout << i << "->";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << "(" << adj[i][j] << ", " << weights[i][j] << ") ";
        }
        cout << endl;
    }

    return 0;
}
