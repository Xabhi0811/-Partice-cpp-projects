#include <bits/stdc++.h>
using namespace std;

void topoSort(int V, vector<vector<int>>& adj) {
    vector<int> indegree(V, 0);
    for (int i = 0; i < V; i++)
        for (auto it : adj[i])
            indegree[it]++;

    queue<int> q;
    for (int i = 0; i < V; i++)
        if (indegree[i] == 0)
            q.push(i);

    vector<int> topo;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for (auto it : adj[node]) {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
    }

    cout << "Topological Order: ";
    for (auto it : topo)
        cout << it << " ";
}

int main() {
    int V = 6;
    vector<vector<int>> adj(V);
    adj[5] = {0, 2};
    adj[4] = {0, 1};
    adj[2] = {3};
    adj[3] = {1};

    topoSort(V, adj);
}
