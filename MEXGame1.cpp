#include<bits/stdc++.h>
#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr1(n);
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        unordered_map<int,int>mp;
        for(auto ele : arr1){
            mp[ele]++;
        }
        vector<int>arr;
        for(auto ele : mp){
            arr.push_back(ele.first);
            if(ele.second > 1){
                arr.push_back(ele.first);
            }
        }
        sort(arr.begin(), arr.end());
        int temp = 0;
        for(int i = 0; i<arr.size(); i+=2){
            if(arr[i]!=temp){
                break;
            }
            temp++;
        }
        cout << temp << endl;
    }
}