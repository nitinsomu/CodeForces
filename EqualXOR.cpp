#include<bits/stdc++.h>
#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n,  k;
        cin >> n >> k;
        vector<int>arr(2*n);
        for(int j = 0; j<2*n; j++){
            cin >> arr[j];
        }
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int j = 0; j<n; j++){
            mp1[arr[j]] ++;
        }
        for(int j = n; j<2*n; j++){
            mp2[arr[j]] ++;
        }
        vector<int>left;
        vector<int>right;
        int temp = k;
        for(auto ele : mp1){
            if(k > 0 && ele.second == 2){
                left.push_back(ele.first);
                left.push_back(ele.first);
                k--;
            }
        }
        
        for(auto ele : mp2){
            if(temp > 0 && ele.second == 2){
                right.push_back(ele.first);
                right.push_back(ele.first);
                temp --;
            }
        }
        k*=2;
        for(auto ele : mp1){
            if(k>0 && ele.second == 1){
                left.push_back(ele.first);
                right.push_back(ele.first);
                k--;
            }
        }
        for(auto ele : left){
            cout << ele << " ";
        }
        cout << endl;
        for(auto ele : right){
            cout << ele << " ";
        }
        cout << endl;

        

    }
}