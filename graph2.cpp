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

    int u, v ,w;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        M[u][v]=M[v][u] = w;
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

/*
5 4
0 1 2
1 2 3
3 4 5
0 3 1


4 5
0 1 10
1 2 20
2 3 30
3 0 40
1 3 50
*/
