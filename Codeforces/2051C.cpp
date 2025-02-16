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
    int n,m,k;
    cin >> n >> m >> k;
    vector<int>a(m+1), q(k+1);
    for (int i = 1; i <= m; i++) cin >> a[i];
    for (int i = 1; i <= k; i++) cin >> q[i];
    if(n == k) for (int i = 0; i < m; i++) cout << 1;
    else if(k+1 == n) {
        set<int>S;
        for (int i = 1; i <= n; i++) S.insert(i);
        for (int i = 1; i <= k; i++) S.erase(q[i]);
        for (int i = 1; i <= m; i++) {
            if (S.find(a[i]) == S.end()) {
                cout << 0 ;
            }
            else cout << 1;
        }
    }
    else for (int i = 0; i < m; i++) cout << 0;
    cout << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}