#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void debugArr(vector<ll>& arr) {for(auto ele : arr) cout << ele << " ";}

int main(){
    int t1;
    cin>>t1;
    while(t1--){
        ll n;
        cin >> n;
        unordered_map<int,int>top;
        unordered_map<int,int>bottom;
        for(int i = 0; i<n; i++) {
            int a, b;
            cin >> a >> b;
            if(b == 0) {
                bottom[a]++;
            } else {
                top[a]++;
            }
        }
        ll t = top.size();
        ll b = bottom.size();
        ll ans = 0;
        for(ll i = 0; i<=n; i++){
            if(bottom[i]>0 && top[i]>0){
                ans += b - 1;
                ans += t - 1;
            }
            if(i + 2 <= n) {
                if(bottom[i] > 0 && bottom[i+2] > 0 && top[i + 1] > 0) {
                    ans++;
                } 
                if(top[i] > 0 && top[i+2] > 0 && bottom[i + 1] > 0) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }   
}