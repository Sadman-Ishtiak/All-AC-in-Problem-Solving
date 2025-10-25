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
int MOD = 998244353;


void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int>b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<int>normal(n, 0);
    vector<int>swaped(n, 0);
    normal[0] = 1;
    swaped[0] = 1;
    for (int i = 1; i < n; i++) {
        if(a[i-1] <= a[i] && b[i-1] <= b[i]) {
            normal[i] += normal[i-1];
        }
        if (b[i-1] <= a[i] && a[i-1] <= b[i])  {
            normal[i] += swaped[i-1];
        }
        if (a[i-1] <= b[i] && b[i-1] <= a[i]) {
            swaped[i] += normal[i-1];
        }
        if (b[i-1] <= b[i] && a[i-1] <= a[i]) {
            swaped[i] += swaped[i-1];
        }
        normal[i] %= MOD;
        swaped[i] %= MOD;
    }
    cout << (normal[n-1] + swaped[n-1])%MOD << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}