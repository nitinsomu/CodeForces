#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        if(n.size()>=3 && n[2] != '0' && n.substr(0,2) == "10" && n != "101"){
            cout << "YES" <<endl;
        } else {
            cout << "NO" <<endl;           
        }
    }
}
