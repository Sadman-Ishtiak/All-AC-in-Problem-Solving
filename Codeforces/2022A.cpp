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
    int n, r;
    cin >> n >> r;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    sort(a)
    int counter = 0;
    reverse(all(a));
    for (int i = 0; i < n; i++) {
        ans += a[i] - (a[i] % 2);
        r -= a[i]/2;
        a[i] %= 2;
        counter += a[i];
    }
    counter -= r;
    // debug(r)
    // debug(counter)
    cout << ans + r - abs(counter) << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}