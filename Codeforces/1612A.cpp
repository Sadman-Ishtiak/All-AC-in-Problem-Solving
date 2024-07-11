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
    int x, y;
    cin >> x >> y;
    if(x%2 == 0 && y%2 == 0) {
        cout << x/2 << " " << y/2 << endl;
    } else if(x%2 == 1 && y%2 == 1) {
        if(x-y >= 0){
            cout << (x-y)/2 << " " << y << endl;
        } else if(y-x >= 0){
            cout << x << " " << (y-x)/2 << endl;
        } else cout << "-1 -1" << endl;
    } else cout << "-1 -1" << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}