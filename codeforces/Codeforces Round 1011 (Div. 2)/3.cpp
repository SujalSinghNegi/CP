
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
//# include "func.h"
 
struct Parent {
    int prev_cx, prev_cy;
    int bit; // chosen bit of k at current position
    bool valid;
};
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
//    ll n;
// cin>>n;
//     vi a(n);
//     inputVector(a,n);
ll x, y;
cin >> x >> y;
if(x == y){
    cout << -1 << "\n";
    return;
}
const int B = 61;
bool dp[B+1][2][2];
memset(dp, false, sizeof(dp));
Parent parent[B+1][2][2];

dp[0][0][0] = true;
parent[0][0][0] = {0,0,0,true};

for (int i = 0; i < B; i++){
    int xi = (x >> i) & 1;
    int yi = (y >> i) & 1;
    for (int cx = 0; cx < 2; cx++){
        for (int cy = 0; cy < 2; cy++){
            if(!dp[i][cx][cy]) continue;
            for (int bit = 0; bit < 2; bit++){
                int sum_x = xi + bit + cx;
                int out_x = sum_x & 1;
                int ncx = sum_x >> 1;

                int sum_y = yi + bit + cy;
                int out_y = sum_y & 1;
                int ncy = sum_y >> 1;

                if(out_x == 1 && out_y == 1) continue;

                if(!dp[i+1][ncx][ncy]){
                    dp[i+1][ncx][ncy] = true;
                    parent[i+1][ncx][ncy] = {cx, cy, bit, true};
                }
            }
        }
    }
}

if(!dp[B][0][0]){
    cout << -1 << "\n";
    return ;
}

ll k = 0;
int cx = 0, cy = 0;
for (int i = B; i > 0; i--){
    Parent p = parent[i][cx][cy];
    int bit = p.bit;
    if(bit) {
        k |= (1LL << (i-1));
    }
    int ncx = p.prev_cx;
    int ncy = p.prev_cy;
    cx = ncx;
    cy = ncy;
}

cout << k << "\n";



   


   
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