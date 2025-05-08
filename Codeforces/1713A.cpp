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
    int mx_x = 0, mn_x = 0, mx_y = 0, mn_y = 0;
    cin >> n;
    vector<pair<int, int>>coordinates(n);
    for (int i = 0; i < n; i++) {
        cin >> coordinates[i].first >> coordinates[i].second;
        mx_x = max(mx_x, coordinates[i].first);
        mn_x = min(mn_x, coordinates[i].first);
        mx_y = max(mx_y, coordinates[i].second);
        mn_y = min(mn_y, coordinates[i].second);
    }
    cout << (mx_x - mn_x + mx_y - mn_y) * 2 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}