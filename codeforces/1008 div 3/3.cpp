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


void solve(){
    long long x; cin >> x;
    int m = 0;
    while ((1LL << (m + 1)) <= x) m++;

    long long base = 1LL << m, r = x - base;
    if(r == 0 || r == base - 1){
        cout << -1 <<endl; return;
    }

    int first = -1, zero = -1;
    for (int i = 0; i < m; i++){
        if (first == -1 && (r >> i) & 1LL) first = i;
        if (zero == -1 && !((r >> i) & 1LL)) zero = i;
        if (first != -1 && zero != -1) break;
    }

    cout << (1LL << first) + (1LL << zero) << endl;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}