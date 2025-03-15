#include<bits/stdc++.h>
using namespace std;
#include "my_stdio.h"
int main() {  
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout<< (((n-1)%4 && (n-2)%4)? "EVEN" : "ODD") <<endl;

    }
    return 0;
}