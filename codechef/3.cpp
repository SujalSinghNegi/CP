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
bool comp (vector<int>a, vector<int>b){
    if(a[0]==b[0]){
        return a[1]<b[1];
    }
    return a[0]<b[0];
}
void solve(){
   int n;
   cin>>n;
   vector<int> a(n), b(n);
   vector<vector<int>> c(n, vector<int>(2));
    for(int i=0; i<n; i++){
         cin>>a[i];
    }
    int ind =-2;
    for(int i=0; i<n; i++){
         cin>>b[i];
         c[i]={abs(b[0]-b[i]), a[i]};
         if(b[0]==a[i]) ind = i;
    }
    sort(c.begin(), c.end()), comp;
    for(int i=0; i<n; i++){
        if(c[i][1]!=b[i]){
            ind =-1;
            break;
        }
    }
    cout<<ind+1<<endl;
    
   
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