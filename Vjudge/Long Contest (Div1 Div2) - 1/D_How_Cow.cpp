#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x,y;
        cin >> x >> y;
        if(x >= x1 && y >= y1 && x <= x2 && y <= y2) Yes;
        else No;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": \n";
        solve();
    }
    return 0;
}