#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>permArr(n);
        for(int i = 0; i<n; i++) {
            cin >> permArr[i];
        }
        int temp = permArr[0];
        for(int i = 0; i<n-1; i++){
            permArr[i] = permArr[i+1];
        }
        permArr[n-1] = temp;
        for(int i = 0; i<n; i++) {
             cout << permArr[i] << " ";
        }
        cout << endl;
    }
}