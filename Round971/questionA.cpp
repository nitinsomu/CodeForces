#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void debugArr(vector<ll>& arr) {for(auto ele : arr) cout << ele << " ";}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        cout << a - b << endl;
    }
}