#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define ll long long
void debugArr(vector<int>& arr) {for(auto ele : arr) cout << ele << " ";}

int dfs(char curr, char dest, unordered_map<char, unordered_set<char>> &mp, unordered_set<char> &visit, int dist){
    if(curr == dest) {
        return dist;
    } 
    if(visit.find(curr) != visit.end()) {
        return -1;
    }
    visit.insert(curr);
    for(auto ele : mp[curr]) {
        dfs(ele, dest, mp, visit, dist+1);
    }
    visit.erase(curr);
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<char, unordered_set<char>>mp;
        unordered_map<int, string>cities;
        int n;
        cin >> n;
        int q;
        cin >> q;
        for(int i = 0; i<n; i++) {
            string portals;
            cin >> portals;
            mp[portals[0]].insert(portals[1]);
            mp[portals[1]].insert(portals[0]);
            cities[i+1] = portals;
        }
        for(int i = 0; i<q; i++) {
            int start, end;
            cin >> start >> end;
            int distance = INT_MAX;
            unordered_set<char>st;
            for(int i = 0; i<2; i++) {
                for(int j = 0; j<2; j++){
                    int temp = dfs(cities[start][i], cities[end][j], mp, st, 0);
                    if(temp != -1) {
                        distance = min(distance, temp);
                    }
                }
            }
            if(distance == INT_MAX) {
                cout << -1 << endl;
            } else {
                cout << distance << endl;
            }
        }
    }
}