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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int>c;
    c['R'] = 0;
    c['L'] = 0;
    for (auto &&i : s) {
        c[i]++;
    }
    if(c['L'] == 0 || c['R'] == 0) cout << -1 << endl;
    else {
        int ans = -1;
        for (int i = 0; i < n-1; i++) {
            if(s[i] == 'R' && s[i+1] == 'L') {
                ans = 0;
                break;
            }
            if(s[i] == 'L' && s[i+1] == 'R') {
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}