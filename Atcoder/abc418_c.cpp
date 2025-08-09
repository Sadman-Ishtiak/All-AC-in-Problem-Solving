#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a)
    vector<int>prefix_sum(n+1, 0);
    for (int i = 0; i < n; i++) {
        prefix_sum[i+1] = prefix_sum[i] + a[i];
    }
    
    while(q--) {
        int b;
        cin >> b;
        if (b > prefix_sum[n]) {
            cout << -1 << '\n';
            continue;
        }
        int val = b - 1;
        int pos = upper_bound(a.begin(), a.end(), val) - a.begin();
        long long s = prefix_sum[pos] + (long long)(n - pos) * val;
        long long ans = max((long long)b, s + 1);
        if (ans > prefix_sum[n]) cout << -1 << endl;
        else cout << ans << endl;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}