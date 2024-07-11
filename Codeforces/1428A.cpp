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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ans = 0;
    if(x1 == x2 && y1 == y2){
        cout << 0 << endl;
    } else if(x1 == x2 || y1 == y2){
        cout << abs(x1- x2) + abs(y1 - y2) << endl;
    } else {
        cout << abs(x1 - x2) + abs(y1 - y2) + 2 << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}