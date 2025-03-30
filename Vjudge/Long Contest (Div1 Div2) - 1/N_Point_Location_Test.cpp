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
    int x1,x2,x,y1,y2,y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    int flag = (x2-x1)*(y-y1) - (y2-y1)*(x-x1);
    if(flag > 0) cout << "LEFT\n";
    else if(flag < 0) cout << "RIGHT\n";
    else cout << "TOUCH\n";
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}