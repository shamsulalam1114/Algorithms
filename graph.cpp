#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int **M = new int*[n];
    for (int i = 0; i < n; i++)
    {
        M[i] = new int[n];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j] = 0;
        }
    }

    int u, v;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        M[u][v]=M[v][u] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
