#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int x;
        cin >> x;
        while(x--) {
            int flag = 1;
            string s;
            cin >> s;
            if(n != s.size()){
                flag = 0;
            }
            if(flag == 1){
                unordered_map<int, char>intToChar;
                unordered_map<char, int>charToInt;
                for(int i = 0; i<n; i++) {
                    if(intToChar.find(arr[i]) == intToChar.end() && charToInt.find(s[i]) == charToInt.end()){
                        intToChar[arr[i]] = s[i];
                        charToInt[s[i]] = arr[i];
                    } else {
                        if(intToChar[arr[i]] != s[i] || charToInt[s[i]] != arr[i]){
                            flag = 0;
                            break;
                        }
                    }
                }
            }
            if(flag == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            } 
        }
    }
}