#include<bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct sujal{
    int type;
    int left;
    int right;
}sujal;
void solve(){
   int n;
   cin>>n;
   string a, b;
    cin>>a>>b;
    vector<sujal> ans;
    int i=0;
    for(;i<n; i++){
        if(a[i]==b[i])continue;
        int j=i;
        while(i<n && a[i]!=b[i])i++;
        ans.push_back({1, j+1, i});       
    }
    cout<<ans.size()<<endl;
    for(auto x: ans){
        cout<<x.type<<" "<<x.left<<" "<<x.right<<endl;
    }

       
   
}
int main() {
   
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}