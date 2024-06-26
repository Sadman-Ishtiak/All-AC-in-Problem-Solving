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
    int a,b,c;
    cin >> a >> b >> c;
    bool ans = false;
    // case a
    int x = b - (c - b);
    // debug(x)
    if(x % a == 0 && x>0) ans = true;
    // case b
    x = (a + c) / 2;
    // debug(x)
    if(a%2 == c%2 && x%b == 0 && x>0) ans = true;
    // case c
    x = b - (a - b);
    // debug(x)
    if(x % c == 0 && x>0) ans = true;
    // output
    if(ans) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}