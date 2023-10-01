#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
int N = 200005;
 
void inOut();
 
void towerOfHonai(int n, int from, int to, int aux, vector<pair<int, int>>& v) {
    if(n == 0) return;
 
    towerOfHonai(n-1, from, aux, to, v);
    v.push_back({from, to});
    towerOfHonai(n-1, aux, to, from, v);
}
 
void solve() {
    int n;
    vector<pair<int, int>> v;
    cin >> n;
 
    towerOfHonai(n, 1, 3, 2, v);
 
    cout << v.size() << "\n";
    for(auto it : v) {
        cout << it.first << " " << it.second << "\n";
    }
}
 
int main() { 
    inOut();
    int tc = 1;
    // cin >> tc;
 
    while(tc--) {
        solve();
    }
 
    return 0;
}
 
void inOut() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input-cpp.txt", "r", stdin);
        freopen("output-cpp.txt", "w", stdout);
    #endif
}