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
    int n,m;
    cin >> n >> m;
    int x;
    int tsondu = 0, tenzing = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        tsondu += x;
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        tenzing += x;
    }
    if(tsondu > tenzing) cout << "Tsondu" << endl;
    else if(tenzing > tsondu) cout << "Tenzing" << endl;
    else cout << "Draw" << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}