#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void debugArr(vector<ll>& arr) {for(auto ele : arr) cout << ele << " ";}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        int nx = ceil(double(x) / k);
        int ny = ceil(double(y) / k) ;
        cout << nx + ny + max(max(nx-ny-1 , ny-nx), 0) << endl;
    }
}