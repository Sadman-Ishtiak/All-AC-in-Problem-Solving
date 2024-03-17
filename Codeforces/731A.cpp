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
    string s;
    cin >> s;
    int ans = 0;
    int n = s.length();
    char c = 'a';
    for (int i = 0; i < n; i++){
        int x = min(abs( c - s[i] ), 26 - abs( c - s[i] ));
        // cout << x << " " << c << " " << s[i] << endl;
        ans += x;
        c = s[i];
    }
    cout << ans;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
	return 0;
}