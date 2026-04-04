#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, e;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> e;

    vector<int> adj[100];

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // For undirected graph
    }

    cout << "\nAdjacency List:\n";
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (int x : adj[i])
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
