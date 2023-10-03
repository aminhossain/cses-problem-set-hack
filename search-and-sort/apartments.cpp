#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int N = 200005;

void inOut();

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    int a[n], b[m];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+m);

    int i = 0, j = 0, cnt = 0;

    while(i < n && j < m) {
        if(b[j] >= (a[i]-k) && b[j] <= (a[i]+k)) cnt++, i++, j++;
        else if(b[j] < (a[i]-k)) j++;
        else if(b[j] > (a[i]+k)) i++;
    }

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