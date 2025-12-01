#include <iostream>
#include <vector>
using namespace std;

void DFSUtil(int node, vector<vector<int>>& adjList, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adjList[node]) {
        if (!visited[neighbor]) {
            DFSUtil(neighbor, adjList, visited);
        }
    }
}

void DFS(int start, vector<vector<int>>& adjList, int V) {
    vector<bool> visited(V, false);
    cout << "DFS Traversal: ";
    DFSUtil(start, adjList, visited);
    cout << endl;
}

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> adjList(V);
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    DFS(0, adjList, V);
    return 0;
}