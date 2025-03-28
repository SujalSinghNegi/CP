#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define mod 1000000007
#define inf 1e18
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
//# include "func.h"
template <typename T>
void printVector(const std::vector<T>& vec) {
    for (const T& val : vec) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void inputVector(std::vector<T>& vec, int n) {
    vec.resize(n);  
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
}
bool cond1();
bool cond2();
void yesno(bool cond) {
    std::cout << (cond ? "YES" : "NO") << std::endl;
}
class Solution {
    public:
        vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
            int n=nums.size();
            unordered_map<int,int> mp;
            unordered_map<int,int>first;
            for(int i=0;i<n;i++){
                if(first.find(nums[i])!= first.end()){
                    first[nums[i]]=i;
                }
            }
            vector<int> ans(n,INT_MAX);
            for(int i=0;i<n;i++){
                if(mp.find(nums[i])==mp.end()){
                    mp[nums[i]]=i;
                }
                else{
                    int j=mp[nums[i]];
                  ans[i]= min(i-j, n-i+first[nums[i]]);
                    ans[j]= min(ans[j], ans[i]);
                  mp[nums[i]]=i;

                }

            }
            vector<int>res;
            for(auto it:queries){
                if(ans[nums[it]]==INT_MAX){
                    res.push_back(-1);
                }
                else  res.push_back(ans[nums[it]]);
            }
            return res;
        }
    };
void solve(){
//    ll n;
// cin>>n;
//     vi a(n);
//     inputVector(a,n);
    

   


   
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}