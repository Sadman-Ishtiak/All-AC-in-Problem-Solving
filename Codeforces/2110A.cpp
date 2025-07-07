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
#define     debug(x)        cerr << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a)
    int l, r;
    for (int i = 0; i < n; i++) {
        if((a[i] + a[n-1]) % 2 == 0) {
            // debug(i)
            l = i;
            break;
        }
    }
    for (int j = n - 1; j >= 0; j--) {
        if((a[0] + a[j]) % 2 == 0) {
            // debug(n - (j + 1))
            r = n - (j + 1);
            break;
        }
    }
    cout << min(l, r) << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}