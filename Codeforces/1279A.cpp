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
    int r, g, b;
    cin >> r >> g >> b;
    if(r+g+b-max({r,b,g}) >= max({r,g,b})-1) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}