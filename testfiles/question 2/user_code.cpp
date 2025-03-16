#include<iostream>
#include <climits>
using namespace std;



void solve() {
    int t;
    cin >> t;
    while(t--) {
        // n can be huge, so use unsigned long long
        unsigned long long n, k;
        cin >> n >> k;
        unsigned long long modResult= ((n*(n+1))/2) % k;
        if(modResult == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
  
}
