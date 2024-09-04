#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void debugArr(vector<ll>& arr) {for(auto ele : arr) cout << ele << " ";}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll low = k;
        ll high = k + n - 1;
        ll sum = 0;
        sum += low;
        low++;
        sum -= high;
        high--;
        while(low <= high){
            if(sum <= 0) {
                sum += low;
                low++;
            } else {
                sum -= high;
                high--;
            }
        }
        cout << abs(sum) << endl;
    }
}