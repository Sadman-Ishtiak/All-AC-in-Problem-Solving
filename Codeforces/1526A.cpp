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
    int n, n2;
    cin >> n;
    n2 = n+n;
    vector<int>a(n2);
    for (int i = 0; i < n2; i++) {
        cin >> a[i];
    }
    sort(a)
    vector<int>ans(n2);
    for (int i = 0; i < n2; i+=2) {
        ans[i] = a[i/2];
        ans[i+1] = a[n + i/2];
    }
    for (int i = 0; i < n2; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}