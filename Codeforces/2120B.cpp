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
    int n, s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int dx, dy, x, y;
        cin >> dx >> dy >> x >> y;
        int tx = (dx == 1 ? s : 0);
        int ty = (dy == 1 ? s : 0);

        if ((abs(tx - x) % s) == (abs(ty - y) % s)) {
            ans++;
        }
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}