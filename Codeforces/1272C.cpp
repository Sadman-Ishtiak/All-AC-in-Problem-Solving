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
    vector<int>cas(26, 0);
    for (int i = 0; i < k; i++) {
        char x;
        cin >> x;
        cas[x - 'a'] = 1;
    }
    vector<int>dp(n,0);
    dp[0] = cas[s[0] - 'a'];
    for (int i = 1; i < n; i++) {
        dp[i] = dp[i] + dp[i-1] + cas[s[i] - 'a'];
        if(cas[s[i] - 'a'] == 0) dp[i] = 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += dp[i];
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}