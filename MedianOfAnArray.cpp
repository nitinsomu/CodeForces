#include<bits/stdc++.h>
#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int median = arr[(n-1)/2];
        int ans = 1;
        for(int i = (n+1)/2; i<n; i++){
            if(arr[i] == median){
                ans++;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
}