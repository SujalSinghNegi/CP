#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    cin >> T;
    while(T--){
        int n, s, t;
        cin >> n >> s >> t;
        s--; t--; // convert to 0-index
        vector<vector<int>> adj(n);
        for(int i = 0; i < n - 1; i++){
            int u, v;
            cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        // BFS from trap t to compute distances
        vector<int> dist(n, -1);
        queue<int> q;
        dist[t] = 0;
        q.push(t);
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for (int nxt : adj[cur]) {
                if(dist[nxt] == -1){
                    dist[nxt] = dist[cur] + 1;
                    q.push(nxt);
                }
            }
        }
        
        // Create permutation: vertices sorted in descending order of distance from t.
        vector<int> perm(n);
        for (int i = 0; i < n; i++) perm[i] = i;
        sort(perm.begin(), perm.end(), [&](int a, int b){
            return dist[a] > dist[b];
        });
        
        // Output the permutation in 1-indexed format.
        for (int v : perm)
            cout << v + 1 << " ";
        cout << "\n";
    }
    return 0;
}