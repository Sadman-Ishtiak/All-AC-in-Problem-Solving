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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnta = 0, cntb = 0;
    for (char c : s) {
        if (c == 'a') ++cnta;
        else ++cntb;
    }
    vector<int> pref_count(n+1, 0);
    for (int i = 0; i < n; i++) {
        pref_count[i+1] = pref_count[i] + (s[i] == 'a' ? 1 : -1);
        // cerr << pref_count[i+1] << " ";
    }
    // cerr << endl;
    if(pref_count[n] == 0) {
        cout << 0 << endl;
        return;
    }
    int ans = INT64_MAX;
    unordered_map<int, int> match;
    for (int i = 0; i < n+1; i++) {
        int val = pref_count[i];
        int need = val - pref_count[n];
        auto it = match.find(need);
        if (it != match.end()) ans = min(ans, i - it->second);
        match[val] = i;
    }
    if (ans == INT64_MAX) ans = -1;
    if(ans == n) ans = -1;
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}