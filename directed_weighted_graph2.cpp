#include <bits/stdc++.h>

using namespace std;

int main() {

    int V, E;

    cin >> V >> E;

    vector<int>* adj = new vector<int>[V];

    vector<int>* weights = new vector<int>[V];

    int u, v, w;

    for (int i = 0; i < E; i++) {

        cin >> u >> v >> w;

        adj[u].push_back(v);

        weights[u].push_back(w);

    }

    for (int i = 0; i < V; i++) {

        cout << i << "->";

        for (int j = 0; j < weights[i].size(); j++) {

            cout << weights[i][j];

            if (j < weights[i].size() - 1) {

                cout << " ";

            }

        }

        cout << endl;

    }

    return 0;

}

/*

Sample Input:

5 4
0 1 10
0 2 5
1 3 7
3 4 2

Sample Output:

0->10 5

1->7

2->

3->2

4->

*/

