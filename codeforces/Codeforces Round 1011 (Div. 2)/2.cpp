#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

// Utility function to input a vector
template <typename T>
void inputVector(vector<T>& vec, int n) {
    vec.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
}
class Solution {
public:
void dfs(int node, vector<vector<int>>& graph, vector<int>& visited) {
    visited[node] = 1;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, graph, visited);
        }
    }
}

int numberOfComponents(vector<vector<int>>& pr, int k) {
    int n = pr.size();
    vector<set<int>> sets(n);
    for (int i = 0; i < n; i++) {
        for (int num : pr[i]) {
            sets[i].insert(num);
        }
    }
    vector<vector<int>> graph(n);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int cnt = 0;
            for (int num : sets[i]) {
                if (sets[j].count(num)) {
                    cnt++;
                }
            }
            if (cnt >= k) {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }
    
    vector<int> visited(n, 0);
    int components = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i, graph, visited);
            components++;
        }
    }
    
    return components;
}
     
    
};



// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
