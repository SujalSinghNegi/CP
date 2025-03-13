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

bool comp (vector<int> a, vector<int> b){
    if(a[0] == b[0]){
        return a[1] < b[1];
    }
    return a[0] < b[0];
}

void solve(){
   int n;
   cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) cin >> b[i];

   for(int i = 0; i < n; i++){
        vector<vector<int>> c(n, vector<int>(2));
        int P = a[i];
        for(int j = 0; j < n; j++){
            c[j] = {abs(a[j] - P), a[j]};
        }
        sort(c.begin(), c.end(), comp);

        bool valid = true;
        for(int j = 0; j < n; j++){
            if(c[j][1] != b[j]){
                valid = false;
                break;
            }
        }
        if(valid){
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
