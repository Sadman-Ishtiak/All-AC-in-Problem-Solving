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
    map<string, string>ans;
    for (int i = 0; i < m; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        ans[s1] = (s1.length() > s2.length())? s2:s1;
    }
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cout << ans[s] << " ";
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}