
// #include<bits/stdc++.h>
// using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define mod 1000000007
#define inf 1e18
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
//# include "func.h"
template <typename T>
void printVector(const std::vector<T>& vec) {
    for (const T& val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void inputVector(std::vector<T>& vec, int n) {
    vec.resize(n);  
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
}
bool cond1();
bool cond2();
void yesno(bool cond) {
    std::cout << (cond ? "YES" : "NO") << std::endl;
}


void dfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
    vis[node] = 1;
    for (int neighbor : adj[node]) {
        if (!vis[neighbor]) {
            dfs(neighbor, adj, vis);
        }
    }
}

class Solution {
    public:
    
    int numberOfComponents(vector<vector<int>>& pr, int k) {
        int n = pr.size();
        vector<set<int>> sets(n);
        for (int i = 0; i < n; i++) {
            for (int num : pr[i]) {
                sets[i].insert(num);
            }
        }
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int cnt = 0;
                for (int num : sets[i]) {
                    if (sets[j].count(num)) {
                        cnt++;
                    }
                }
                if (cnt >= k) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
 vector<int> vis(n, 0);
            int c = 0;
            for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, adj, vis);
                c++;
            }
             }
        
        
        return c;
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
    