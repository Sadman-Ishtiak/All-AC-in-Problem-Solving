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
    vector<int>a(n);
    for (auto &&i : a){
        cin >> i;
    }
    sort(a)
    int mincost = __INT64_MAX__;
    for (int i = 0; i < n-2; i++) {
        mincost = min({a[i+1] + a[i+2] - 2*a[i], a[i+2] - a[i], 2*a[i+2] - a[i+1] - a[i], mincost});
    }
    cout << mincost << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}