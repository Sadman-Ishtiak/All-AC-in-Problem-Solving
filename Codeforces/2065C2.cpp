#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int>a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(b)
    a[0] = min(a[0], b[0] - a[0]);
    for (int i = 1; i < n; i++) {
        auto it = lower_bound(b.begin(), b.end(), a[i-1] + a[i]);
        if(it != b.end()) {
            if(a[i] < a[i-1]) a[i] = *it - a[i];
            else a[i] = min(a[i], *it - a[i]);
        }
        if(a[i] < a[i-1]) {
            NO; return;
        }
    }
    if(is_sorted(all(a))) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}