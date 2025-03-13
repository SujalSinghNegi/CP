#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> b(2 * n);
        for (int i = 0; i < 2 * n; i++) cin >> b[i];
        
        if(n == 1){
            cout << b[0] << " " << b[0] + b[1] << " " << b[1] << "\n";
            continue;
        }
        
        sort(b.begin(), b.end());
        vector<ll> U(b.begin(), b.begin() + n), V(b.begin() + n, b.end());
        ll sumU = accumulate(U.begin(), U.end(), 0LL), sumV = accumulate(V.begin(), V.end(), 0LL);
        ll x = sumV - sumU;
        auto inB = [&](ll val){ return binary_search(b.begin(), b.end(), val); };
        
        if(x <= 0 || inB(x)){
            bool ok = false;
            for (int i = max(0, n - 10); i < n && !ok; i++){
                for (int j = 0; j < min(n, 10); j++){
                    ll newSumU = sumU - U[i] + V[j];
                    ll newSumV = sumV - V[j] + U[i];
                    ll cand = newSumV - newSumU;
                    if(cand > 0 && !inB(cand)){
                        swap(U[i], V[j]);
                        x = cand;
                        ok = true;
                        break;
                    }
                }
            }
        }
        
        vector<ll> a;
        a.push_back(x);
        for (int i = 0; i < n; i++){
            a.push_back(V[i]);
            a.push_back(U[i]);
        }
        for(auto num : a) cout << num << " ";
        cout << "\n";
    }
    return 0;
}
