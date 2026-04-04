#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<int> adj[], int n) {
    vector<int> visited(n, 0);
    queue<int> q;
    visited[start] = 1;
    q.push(start);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(0, adj, n);
}
 