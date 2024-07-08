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
    set<int>forbidden;
    int high = INT64_MAX, low = INT64_MIN;
    for (int i = 0; i < n; i++){
        int k, x;
        cin >> k >> x;
        if(k == 1) low = max(x, low);
        if(k == 2) high = min(high, x);
        if(k == 3) forbidden.insert(x);
    }
    // debug(high)
    // debug(low)
    int ans = max(0LL, high - low + 1);
    for (auto i : forbidden){
        if(i>= low && i <= high) ans--;
        // cout << i << " ";
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}