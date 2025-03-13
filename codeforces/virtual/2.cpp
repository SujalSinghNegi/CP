#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool check(ll num){
    ll ans = sqrt(num);
    ll sum2= ans*ans;
    return num == sum2;
}
void solve(){
    ll n;
    cin>>n;
    ll sum= (n*(n+1))/2;

    if(check(sum)){
        cout<<-1<<endl;
        return;
    }
    unordered_set<ll> s;
    ll res=0;
    int cnt =0;
    ll i=1;
    while(cnt < n){
        if(check(res+ i)){
            s.insert(i);
            i++;
            cnt++;
            continue;
        }
        res+=i;
        cout<<i<<" ";
        i++;
        cnt++;

    }
    while(!s.empty()){
        for(auto it = s.begin(); it != s.end(); ) { 
             if(check(res + *it)) {
                 ++it;
             } else {
                 res += *it;
                 cout << *it << " ";
                 it = s.erase(it); 
             }
        }
    }
    
    cout<<endl;
       
   
}
int main() {

    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}