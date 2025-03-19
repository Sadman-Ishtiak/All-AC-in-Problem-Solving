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
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    int ans = 0;
    if(c >= z) {
        ans += z;
        z = 0;
    } else {
        ans += c;
        z -= c;  
        y += z;  // making them one size smaller
    }
    if(b >= y) {
        ans += y;
        y = 0;
    } else {
        ans += b;
        y -= b;
        x += y;  // making them one size smaller
    }
    ans += min(a,x);
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}