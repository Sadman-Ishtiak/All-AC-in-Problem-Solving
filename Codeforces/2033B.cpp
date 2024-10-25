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
    vector<vector<int>>a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for (int i = n - 1; i > 0; i--) {
        int j = 0, k = 0;
        set<int>flags;
        flags.insert(0);
        while (i + k < n && j+k < n) {
            flags.insert(a[i+k][j+k]);
            k++;
        }
        ans += *flags.begin();
    }
    for (int j = 0; j < n; j++) {
        int i = 0, k = 0;
        set<int>flags;
        flags.insert(0);
        while (i + k < n && j+k < n) {
            flags.insert(a[i+k][j+k]);
            k++;
        }
        ans += *flags.begin();
    }
    
    cout << -ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}