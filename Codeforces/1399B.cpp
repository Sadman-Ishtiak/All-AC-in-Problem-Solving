#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    int mina = INT64_MAX, minb = INT64_MAX;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mina = min(a[i], mina);
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
        minb = min(b[i], minb);
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        int z = min(a[i] - mina, b[i] - minb);
        ans += z;
        a[i] -= z;
        b[i] -= z;
        ans += a[i] - mina;
        ans += b[i] - minb;
        // cout << a[i] << " "<< b[i] << endl;
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}