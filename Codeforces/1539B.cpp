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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int>arr(n+1, 0);
    for (int i = 1; i <= n; i++) {
        arr[i] += arr[i-1] + s[i-1] - 'a' + 1;
        // cout << arr[i] << " ";
    }
    // cout << endl;
    for (int i = 0; i < q; i++) {
        int ans = 0;
        int l, r;
        cin >> l >> r;
        cout << arr[r] - arr[l-1] << endl;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}