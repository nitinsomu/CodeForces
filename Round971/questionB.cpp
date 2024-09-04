#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void debugArr(vector<int>& arr) {for(auto ele : arr) cout << ele << " ";}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr;
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for(int i = 0; i<4; i++) {
                if(s[i] == '#'){
                    arr.push_back(i+1);
                    break;
                }
            }
        }
        reverse(arr.begin(), arr.end());
        debugArr(arr);
        cout << endl;

    }
}