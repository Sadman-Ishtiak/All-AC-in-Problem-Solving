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
    int n, mx = 0;
    cin >> n;
    vector<int>a(n+1, 0), b(n+1,0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if(a[mx] < a[i]) mx = i;
    }
    int ans = a[mx] + n/2;
    for (int i = 1; i <= n; i++) {
        if(a[mx] == a[i] && i%2 == 1 && n%2 == 1) {
            ans++;
            break;
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