#include<bits/stdc++.h>
using namespace std;
void solve() {  
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << ((n % 4 == 0 || n % 4 == 3) ? "EVEN" : "ODD") << "\n";
    }
}