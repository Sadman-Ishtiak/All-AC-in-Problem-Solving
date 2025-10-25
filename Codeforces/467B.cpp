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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>x(m+1);
    for (int i = 0; i <= m; i++) {
        cin >> x[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        int diff = x[i]^x[m];
        int cnt = 0;
        while (diff) {
            cnt += (diff &1LL);
            diff >>= 1;
        }
        if(cnt <= k) ans++;
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}