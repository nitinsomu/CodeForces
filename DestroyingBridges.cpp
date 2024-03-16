#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n, k;
        cin >> n >> k;
        int ans = 0;
        if(k >= n - 1){
            ans = 1;
        }
        else{
            ans = n;
        }
        cout << ans << endl;
    }
}