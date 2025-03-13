#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(2*n);
        ll sum=0;
        unordered_map<int,int>mpp;
        for(ll i=0;i<2*n;i++){
            cin>>a[i];
            mpp[a[i]]=1;
        }
        for(ll i=0;i<2*n-1;i+=2){
            sum+=a[i]-a[i+1];
        }
        mpp[0]=1;
        bool f=0;
        //sum=0;
        for(ll i=0;i<2*n;i+=2){
            if(mpp.find(sum)==mpp.end()){
                break;
            }
            swap(a[i], a[i+1]);
            sum+=2*(-a[i]+a[i+1]);
        }
        
        
       
       // sort(a.begin(),a.end());
      //  reverse(a.begin(),a.end());
       
       
        if(sum>0)  cout<<sum<<" ";
        for(ll i=0; i<2*n; i++){
            cout<<a[i]<<" ";
        }
        if(sum<0)  cout<<-sum<<" ";
    
        cout<<endl;

    }
    return 0;
}