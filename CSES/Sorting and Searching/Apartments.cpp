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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a)
    sort(b)
    int ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m) {
        int minimum = a[i] - k;
        int maximum = a[i] + k;
        if(b[j] >= minimum && b[j] <= maximum) {
            ans++;
            i++;
            j++;
        } else if(b[j] > maximum) i++;
        else if(b[j] < minimum) j++;
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}