#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
       // vector<int>a(n);
        double sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            //cin>>a[i];
            sum+=x;
        }
    if((double)(sum/n) ==(double)k){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}