#include <bits/stdc++.h>
using namespace std;

bool isCyclicUtil(int node, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (isCyclicUtil(neighbor, node, adj, visited))
                return true;
        } else if (neighbor != parent)
            return true;
    }
    return false;
}

bool isCyclic(int V, vector<vector<int>>& adj) {
    vector<bool> visited(V, false);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (isCyclicUtil(i, -1, adj, visited))
                return true;
        }
    }
    return false;
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);
    adj[0] = {1};
    adj[1] = {0, 2, 3};
    adj[2] = {1, 3};
    adj[3] = {1, 2, 4};
    adj[4] = {3};

    cout << (isCyclic(V, adj) ? "Graph contains cycle" : "No cycle found");
}
