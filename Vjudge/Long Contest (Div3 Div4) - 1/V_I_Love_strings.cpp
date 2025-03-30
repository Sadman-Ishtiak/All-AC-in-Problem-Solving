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
    string s, t;
    cin >> s >> t;
    int l1 = s.length(), l2 = t.length(), n;
    n = min(l1, l2);
    for (int i = 0; i < n; i++) {
        cout << s[i] << t[i];
    }
    for (int i = n; i < l1; i++) {
        cout << s[i];
    }
    for (int i = n; i < l2; i++) {
        cout << t[i];
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}