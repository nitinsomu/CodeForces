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
        for(int i = 0; i<n; i++) {
            cin >> arr[i];
        }
        unordered_set<int>st;
        st.insert(arr[0]);
        int flag = 1;
        for(int i = 1; i<n; i++){
            int ele = arr[i];
            if(st.find(ele-1) != st.end() && st.find(ele+1) != st.end()) {
                flag = 0;
                break;
            } else {
                st.insert(ele);
            }
        }
        if(flag ) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}