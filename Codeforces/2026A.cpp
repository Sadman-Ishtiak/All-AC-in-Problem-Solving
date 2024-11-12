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
    int x,y,k;
    cin >> x >> y >> k;
    int l = min(x,y);
    int ax = 0, ay = 0, bx = l, by = l, cx = l, cy = 0, dx = 0, dy = l;
    cout << ax << " " << ay << " " << bx << " " << by << endl;
    cout << cx << " " << cy << " " << dx << " " << dy << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}