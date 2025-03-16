#include<iostream>
using namespace std;
#include "my_stdio.h"
int main(){
   int t;
   cin >> t;
   while(t--) {
       // n can be huge, so use unsigned long long
       unsigned long long n, k;
       cin >> n >> k;
       
       // We want to check if (n*(n+1)/2) % k == 0 without computing the full product.
       // Since one of n or n+1 is even, we divide the even one by 2 first.
       unsigned long long modResult;
       if(n % 2 == 0) {
           // n is even, so compute (n/2) * (n+1) modulo k.
           modResult = ((n / 2) % k * ((n + 1) % k)) % k;
       } else {
           // n is odd, so (n+1) is even.
           modResult = (n % k * (((n + 1) / 2) % k)) % k;
       }
       
       // If modResult equals 0 then the sum is divisible by k.
       if(modResult == 0)
           cout << "YES" << "\n";
       else
           cout << "NO" << "\n";
   }
  
    
return 0;
    
}