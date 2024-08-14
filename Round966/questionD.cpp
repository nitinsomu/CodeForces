#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

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
        string s;
        cin >> s;
        int rights = 0;
        int lefts = 0;
        for(int i = 0; i<n; i++) {
            if(s[i] == 'R') {
                rights++;
            } else {
                lefts++;
            }
        }
        int skipRights = 0;
        if(rights > lefts) {
            skipRights = rights - lefts;
        }
        int ans = 0;
        int multiplier = 0;
        for(int i = 0; i<n; i++) {
            if(s[i] == 'L') {
                if(multiplier < rights)
                multiplier++;
                ans += arr[i] * multiplier;
            } else if (s[i] == 'R'){
                ans += arr[i] * multiplier;
                if(skipRights > 0) skipRights--;
                else if(skipRights == 0){ 
                    rights--;
                    multiplier--;
                }
            }
        }
        cout << ans << endl;
    }
}