#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void debugArr(vector<ll>& arr) {for(auto ele : arr) cout << ele << " ";}

int main(){
    int t;
    cin>>t;
    while(t--){
            int n, k;
            cin >> n >> k;
            vector<int>arr(n);
            for(int i = 0; i<n; i++) {
                cin >> arr[i];
            }
            sort(arr.begin(), arr.end(), greater<int>());
            for(int i = 1; i<n; i+=2) {
                if(arr[i-1] - arr[i] >= k) {
                    arr[i] += k;
                    break;
                } else {
                    k = k - arr[i-1] + arr[i];
                    arr[i] = arr[i-1];
                }
            }
            int ans = 0;
            for(int i = 0; i<n; i++){
                if(i%2 == 0) {
                    ans += arr[i];
                } else {
                    ans -= arr[i];
                }
            }
            cout << ans << endl;
        }
    }
