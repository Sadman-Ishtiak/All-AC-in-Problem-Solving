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
    vector<int>a(n), b(n, INT64_MAX), c(n-2, INT64_MAX);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n-2; i++) {
        cin >> c[i];
    }
    sort(a)
    sort(b)
    sort(c)
    int i = 0;
    while (i < n) {
        if(a[i] != b[i]) {
            cout << a[i] << endl;
            break;
        }
        i++;
    }
    i = 0;
    while (i < n) {
        if(c[i] != b[i]) {
            cout << b[i] << endl;
            break;
        }
        i++;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}