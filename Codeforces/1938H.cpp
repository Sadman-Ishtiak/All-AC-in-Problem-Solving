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
    vector<vector<int>>a(n, vector<int>(2, 0));
    vector<int>total(2, 0), pick(2, 0);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (auto &&x : s) {
            a[i][x - '0']++;
        }
        // cerr << a[i][0] << " " << a[i][1] << endl;
        if(a[i][0] > a[i][1]) {
            pick[0]++;
            ans += a[i][1];
        }
        else {
            pick[1]++;
            ans += a[i][0];
        }
        total[0] += a[i][0];
        total[1] += a[i][1];
    }
    if(max(pick[0], pick[1]) == n && min(total[0], total[1]) != 0) {
        int flag = INT64_MAX;
        for (int i = 0; i < n; i++) {
            flag = min(flag, abs( a[i][0] - a[i][1] ));
        }
        ans += flag;
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}