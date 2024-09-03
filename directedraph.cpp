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
        M[u][v]=w;
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
4 4
0 1 10
0 2 5
1 2 3
2 3 8

5 5
0 1 2
1 2 4
2 3 6
3 4 8
4 0 10

3 3
0 1 7
1 2 14
2 0 21
*/
