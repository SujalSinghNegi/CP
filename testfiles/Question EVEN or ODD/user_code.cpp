#include<iostream>
using namespace std;

void solve(){
 // Write your code here
 // Hint : first you have to take the 't' test cases as input
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum = (n*(n+1))/2;
    if(sum%2==0){
        cout<<"EVEN"<<endl;
    }else {
        cout<<"ODD"<<endl;
    }
}
 
    
}