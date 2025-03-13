#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    long long n;
    cin >> n;
    vector<ll>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    ll sum = 0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
           // cout<<a[i]<<" "<<a[j]<<" "<<(a[i]&a[j])<<endl;
            if((a[i]&a[j]) !=0)sum+=2;
            else sum+=1;
        }
    }
    cout<<sum<<endl;
   
   
}
int main() {
  
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}