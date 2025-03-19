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
    int n, m;
    cin >> n >> m;
    set<int>ans;
    // calculation
    ans.insert(n);

    for (int i = 0; i < 62; i++) {
        int x = (1LL<<i);
        x = (x | n);
        if((n & x) == n){
            // cerr << x << endl;
            if(x <= m) ans.insert(x);
        }
    }
    
    // output
    if(ans.size() > 1) {
        cout << ans.size() << endl;
        for (auto &&i : ans) {
            cout << i << " ";
        }
        cout << endl;
    } else cout << -1 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}