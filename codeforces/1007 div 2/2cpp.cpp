#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        for(ll i=0;i<n-2;i++){
            cout<<n - !(k&1)<<" ";
        }
        cout<<n<<" ";
        cout<<n - 1<<" ";
        cout<<endl; 
    }
    return 0;
}