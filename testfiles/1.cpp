#include<bits/stdc++.h>
using namespace std;
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
# include "func.h"
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

void solve(){
   ll n;
cin>>n;
   
    yesno((n+3)%4 && (n+2)%4);
 
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}