//breach of faith
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve() {
    ll n;
    cin>>n;
    vector<ll>a(2*n);
    for(ll i=0; i<2*n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    ll sum1=0, sum2=0;

    for(ll i=0; i<n-1; i++) sum1+=a[i];
    for(ll i=n-1; i<2*n; i++) sum2+=a[i];
    ll ans=sum2-sum1;
    a.push_back(ans);
    swap(a[n-1], a[2*n]);
    int j=0, k=n;
    for(ll i=0; i<=2*n; i++) {
         if(i&1) cout<<a[j++]<<" ";
         else cout<<a[k++]<<" ";
    }
    cout<<endl;

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