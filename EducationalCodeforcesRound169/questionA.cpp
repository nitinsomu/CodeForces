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
        unordered_set<int>st;
        for(int i = 0; i<n; i++) {
            int temp;
            cin >> temp;
            st.insert(temp);
        }
        if(st.size() > 2) {
            cout << "NO" << endl;
        } else if (st.size() == 2) {
            int first = -1;
            int second = -1;
            for(auto ele : st){
                if(first == -1) first = ele;
                else second = ele;
            }
            if(abs(first - second) == 1) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
            
        } else {
            cout << "YES" << endl;
        }
    }
}
