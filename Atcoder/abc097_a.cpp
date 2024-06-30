#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "Yes" << '\n'
#define     NO              cout << "No" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int s = min({a, b, c}), m, l = max({a, b, c});
    m = a+b+c-s-l;
    if(a > c) swap(a, c);
    // cout << a << " " << c;
    if(a + x >= c) YES;
    else if(s+x >= m && m+x >= l) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}