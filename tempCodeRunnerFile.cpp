#include<iostream>
using namespace std;

int main() {
   
   int n;
   cin>>n;
  
    cout<< (((n+3)%4 && (n+2)%4)? "EVEN" : "ODD") <<endl;
  
    
    return 0;
}