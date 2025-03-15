#include<iostream>
using namespace std;
bool chk_odd( int a){
    if(a%2==0){
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    int i=0;
    while(i<t){
    int n;
    cin>>n;

    int chk = (n-1)/2;
    if(chk_odd(n)){
        if(chk_odd(chk)){
            cout<<"even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
    else{
        if(chk_odd(n/2)){
            cout<<"odd"<<endl;
        }
        else{
            cout<<"even"<<endl;
        }
    }
    i++;
    }
   return 0;
}