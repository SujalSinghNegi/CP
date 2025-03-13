#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    long long n;
    cin >> n;
    long long ans = 0, m=0;
    if(n == 1) ans = 1;
    else if(n&1){    
        m = (n - 1) / 2;   
       // cout<<"m is " <<m<<" ";
        ans =  (long long ) (2*m*m*m + 3*m*m + 4*m + 3) / 3LL;
    }
    else{
         m = n / 2LL;
        ans = (long long ) (4*m*m*m + 3*m*m + 5*m + 6) / 6LL;
       // cout<<"m is " <<m<<" ";

    }
    cout<<ans<<endl;
   
}
int main() {
  
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}