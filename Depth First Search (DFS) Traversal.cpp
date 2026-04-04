#include <bits/stdc++.h>
using namespace std;

void DFSUtil(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor])
            DFSUtil(neighbor, adj, visited);
    }
}

void DFS(int start, vector<vector<int>>& adj, int V) {
    vector<bool> visited(V, false);
    DFSUtil(start, adj, visited);
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);
    adj[0] = {1, 2};
    adj[1] = {0, 3};
    adj[2] = {0, 4};
    adj[3] = {1};
    adj[4] = {2};

    cout << "DFS Traversal starting from node 0: ";
    DFS(0, adj, V);
}
