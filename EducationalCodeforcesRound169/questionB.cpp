#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void debugArr(vector<ll>& arr) {for(auto ele : arr) cout << ele << " ";}

int main(){
    int t;
    cin>>t;
    while(t--){
        int al, ar, bl, br;
        cin >> al >> ar >> bl >> br;
        if(ar < bl || br < al) {
            cout << 1 << endl;
        } else {
            int l = max(al, bl);
            int r = min(ar, br);
            int ans = r - l;
            if(al != bl) ans++;
            if(ar != br) ans++;
            cout << ans << endl;
        }
    }
}