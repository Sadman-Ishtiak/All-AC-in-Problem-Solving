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
    int arr[n+1][m+1];
    map<int, vector<pair<int,int>>>colors;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
            colors[arr[i][j]].push_back(pair(i, j));
        }
    }
    int ans = 0;
    for (auto &&i : colors) {
        int add = 0;
        vector<int>x, y;
        for (auto &&vtr : i.second) {
            x.push_back(vtr.first);
            y.push_back(vtr.second);
        }
        sort(x)
        sort(y)
        int accumale = 0;
        for (int i = 0; i < x.size(); i++) {
            add += 2 * abs(x[i] * i - accumale);
            accumale += x[i];
        }
        accumale = 0;
        for (int i = 0; i < y.size(); i++) {
            add += 2 * abs(y[i] * i - accumale);
            accumale += y[i];
        }
        ans += add;
    }
    cout << ans;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}