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
    int n, m;
    cin >> n >> m;
    vector<string>s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    vector<vector<int>>nums(n, vector<int>(m, 0LL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            nums[i][j] = s[i][j] - '0';
        }
    }
    int rc = 0, cc = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += nums[i][j];
        }
        rc += (sum%2);
    }
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i][j];
        }
        cc += (sum%2);
    }
    
    cout << max(rc, cc) << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}