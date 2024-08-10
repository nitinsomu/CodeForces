#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, k;
        cin >> x >> y >>k;
        if(k%2 == 0) {
            int i = 1;
            while(i <= k){
                cout << x + i << " " << y + i<< endl;
                cout << x - i << " " << y - i << endl;
                i+=2;
            }
        } else {
            cout << x << " " << y << endl;
            int i = 1;
            while(i < k) {
                cout << x + i << " " << y + i<< endl;
                cout << x - i << " " << y - i << endl;
                i+=2;
            }
        }
    }
}
