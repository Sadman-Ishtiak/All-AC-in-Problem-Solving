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
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int ans = (n / (a + b + c))*3;
    n = n % (a + b + c);
    if(n == 0) cout << ans << endl;
    else if(n - a <= 0) cout << ans+1 << endl;
    else if(n - a - b <= 0) cout << ans + 2 << endl;
    else cout << ans + 3 << endl;
    // debug(n)
    // debug(ans)
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}