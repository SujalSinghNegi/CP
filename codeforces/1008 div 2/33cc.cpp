#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> b(2 * n);
        unordered_set<ll> present;
        for (ll i = 0; i < 2 * n; i++){
            cin >> b[i];
            present.insert(b[i]);
        }
        ll altSum = 0;
        for (ll i = 0; i < 2 * n - 1; i += 2){
            altSum += b[i] - b[i + 1];
        }
        present.insert(0);
        for (ll i = 0; i < 2 * n; i += 2){
            if (present.find(altSum) == present.end()){
                break;
            }
            swap(b[i], b[i + 1]);
            altSum += 2 * (b[i + 1] - b[i]);
        }
        if (altSum > 0)
            cout << altSum << " ";
        for (ll i = 0; i < 2 * n; i++)
            cout << b[i] << " ";
        if (altSum < 0)
            cout << -altSum << " ";
        cout << "\n";
    }
    return 0;
}
