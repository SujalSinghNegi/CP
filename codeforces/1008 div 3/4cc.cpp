#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; 
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> centers(n), radii(n);
        for (int i = 0; i < n; i++) 
            cin >> centers[i];
        for (int i = 0; i < n; i++) 
            cin >> radii[i];
        
        // We'll gather contributions: each entry is a pair (x, y) meaning that for that x-coordinate,
        // this circle contributes an integer vertical extent y (i.e. covers y in [-y, y]).
        // Using symmetry we iterate dx from 0 to r and update both x = center+dx and center-dx.
        vector<pair<ll, int>> contrib;
        // Reserve an approximate size: each circle contributes (2*r+1) values, total <= 3*m.
        contrib.reserve(3LL * m);
        
        for (int i = 0; i < n; i++){
            int cx = centers[i], r = radii[i];
            ll r2 = (ll) r * r;
            for (int dx = 0; dx <= r; dx++){
                // Compute maximum y such that (dx)^2 + y^2 <= r^2.
                int y = (int) floor(sqrt((long double)(r2 - (ll)dx * dx)));
                // For x = cx + dx:
                contrib.push_back({(ll)cx + dx, y});
                // For x = cx - dx (if dx > 0 to avoid duplicate)
                if(dx != 0)
                    contrib.push_back({(ll)cx - dx, y});
            }
        }
        
        // Sort contributions by x coordinate.
        sort(contrib.begin(), contrib.end(), [](const pair<ll, int> &a, const pair<ll, int> &b){
            return a.first < b.first;
        });
        
        // For each unique x, take the maximum y among contributions.
        ll ans = 0;
        for (size_t i = 0; i < contrib.size(); ){
            ll x = contrib[i].first;
            int maxY = contrib[i].second;
            size_t j = i + 1;
            while(j < contrib.size() && contrib[j].first == x){
                maxY = max(maxY, contrib[j].second);
                j++;
            }
            // At x, all integer y from -maxY to maxY are covered: 2*maxY + 1 points.
            ans += (2LL * maxY + 1);
            i = j;
        }
        cout << ans << "\n";
    }
    return 0;
}
