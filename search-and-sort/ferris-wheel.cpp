#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int N = 200005;

void inOut();

void solve() {
    int n, x;
    cin >> n >> x;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);

    if(n == 1) {
        if(a[0] <= x) cout << 0 << "\n";
        else cout << 1 << "\n";
    }

    int i = 0, j = n-1, cnt = 0;

    while(j > i) {
        if((a[i] + a[j]) <= x) cnt++, i++, j--;
        else j--;
    }

    cnt = cnt + (n-(cnt*2));
    cout << cnt << "\n";
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