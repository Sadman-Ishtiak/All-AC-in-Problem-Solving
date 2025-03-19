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
    string ans = "1";
    for (int i = 1; i < n; i++) {
        if(s[i-1] == '1' && ans[i-1] == '1') {
            ans = ans + ((s[i] == '0')?'1':'0');
        } else if(s[i-1] == '1' || ans[i-1] == '1') {
            ans = ans + ((s[i] == '1')? '1' : '0');
        } else {
            ans = ans + '1';
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