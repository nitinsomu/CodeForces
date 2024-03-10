#include <bits/stdc++.h>
#include <unordered_map>
#include <iostream>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char, long long>mp;
    for (auto ch : s){
        mp[ch]++;
    }
    vector<pair<long long,char>> freqs;
    for(auto x : mp){
        freqs.push_back({x.second, x.first});
    }
    sort(freqs.begin(), freqs.end(), greater<pair<long long,char>>());
    long long ans = 0;    
    for(auto x : freqs){
        if(x.first <= k){
            ans += x.first*x.first;
            k -= x.first;
        }
        else{
            ans += k * k;
            break;
        }
    }
    cout<<ans;
}