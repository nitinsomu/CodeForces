#include<bits/stdc++.h>
#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        vector<vector<char>>vec(8, vector<char>(8));
        for(int i = 0; i<8; i++){
            string s;
            cin>>s;
            for(int j=0; j<8; j++){
                vec[i][j] = s[j];
            }
        }
        string ans = "";
        int flag = 0;
        for(int i = 0; i<8; i++){
            for(int j=0; j<8; j++){
                if(vec[i][j]!='.'){
                    while(i<8 && vec[i][j]!='.'){
                        flag = 1;
                        ans += vec[i][j];
                        i++;
                    }
                    if(flag == 1)break;
                }
            }
            if(flag ==1) break;
        }   
        cout << ans << endl;
    }
}