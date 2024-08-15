#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void debugArr(vector<ll>& arr) {for(auto ele : arr) cout << ele << " ";}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i = 0; i<n; i++){
            cin >> arr[i];
        }
        vector<ll>prefix(n + 1);
        prefix[0] = 0;
        for(ll i = 0; i<n; i++) {
            prefix[i + 1] = prefix[i] + arr[i];
        }
        string s;
        cin >> s;
        ll l = 0;
        ll r = n - 1;
        ll ans = 0;
        while(l < r) {
            while(l < n && s[l] != 'L') {
                l++;
            }
            while(r >=0 && s[r] != 'R') {
                r--;
            }
            if(l>=r) break;
            ans += prefix[r + 1] - prefix[l];
            l++;
            r--;
        }
        cout << ans << endl;
    }
}