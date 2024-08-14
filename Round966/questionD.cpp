#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void debugArr(vector<int>& arr) {for(auto ele : arr) cout << ele << " ";}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        vector<int>prefix(n + 1);
        prefix[0] = 0;
        for(int i = 0; i<=n; i++) {
            prefix[i + 1] += prefix[i] + arr[i];
        }
        string s;
        cin >> s;
        int l = 0;
        int r = n - 1;
        int ans = 0;
        while(l < r) {
            while(s[l] != 'L') {
                l++;
            }
            while(s[r] != 'R') {
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