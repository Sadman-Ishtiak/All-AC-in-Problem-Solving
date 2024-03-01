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
    int n,m;
    cin >> n >> m;
    vector<int>a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    sort(a)
    for (int i = 0; i < m; i++){
        if(a[i] <= 0) ans -= a[i];
        else break;
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}