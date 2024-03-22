#include<bits/stdc++.h>
#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        long long max_sum = 0;
        long long local_max = 0;
        for(int i = 0; i<n; i++){   
            local_max = max((local_max + arr[i]*1ll), max(arr[i], 0)*1ll);
            if(local_max > max_sum){
                max_sum = local_max;
            }
        }
        long long  ans = 0;
        if(max_sum == 0){
            for(int i = 0; i<n ; i++){
                ans = (ans%1000000007 + arr[i]%1000000007)%1000000007;
            }
            if(ans<0)
            ans = 1000000007 + ans;
        } else {
            ans = max_sum;
            while(k--){
                ans = (ans%1000000007 + ans%1000000007)%1000000007;
            }
            long long sum = 0;
            for(int i = 0; i<n ; i++){
                sum = (sum%1000000007 + arr[i]%1000000007)%1000000007;
            }
            ans = (sum%1000000007 - max_sum%1000000007 + ans%1000000007)%1000000007;
            if(ans<0)
            ans = 1000000007 + ans;
        }
        cout << ans << endl;
    }
}