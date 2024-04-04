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
    vector<int>a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a)
    sort(b)
    reverse(all(b));
    int ans[n+1] = {0};
    for (int i = 0; i < n; i++){
        ans[0] += abs(a[i] - b[i]);
    }
    int out = ans[0];
    for (int i = 1; i <= n; i++){
        ans[i] = ans[i-1];
        ans[i] -= abs(a[n-i] - b[n-i]);
        ans[i] += abs(a[n-i] - b[m-i]);
        out = max(out, ans[i]);
    }
    
    cout << out << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}