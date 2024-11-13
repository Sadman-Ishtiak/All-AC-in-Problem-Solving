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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int b = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'B') b++;
    }
    int ans = 0;
    if(b == k) cout << 0 << endl;
    else if(b > k) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if(s[i] == 'B') {
                ans = i+1;
                b--;
                if(b == k) {
                    break;
                }
            }
        }
        cout << 1 << endl;
        cout << ans << " A" << endl;
    } else {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if(s[i] == 'A') {
                ans = i+1;
                b++;
                if(b == k) {
                    break;
                }
            }
        }
        cout << 1 << endl;
        cout << ans << " B" << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}