#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int N = 200005;

void inOut();

void solve() {
    int n, m, x;
    multiset<int, greater<int>> st;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        cin >> x;
        st.insert(x);
    }

    for(int i = 0; i < m; i++) {
        cin >> x;
        auto it = st.lower_bound(x);
        if(it == st.end()) cout << -1 << "\n";
        else {
            cout << (*it) << "\n";
            st.erase(it);
        }
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