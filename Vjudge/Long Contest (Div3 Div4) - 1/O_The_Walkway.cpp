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
    int n, m, d;
    cin >> n >> m >> d;
    vector<int>sellers(m+2, 0);
    for (int i = 1; i <= m; i++) {
        cin >> sellers[i];
    }
    sellers[0] = 1-d;
    sellers[m+1] = n+1;
    int total_if_none_removed = m;
    for (int i = 1; i <= m+1; i++) {
        total_if_none_removed += (sellers[i] - sellers[i-1] - 1)/d;
    }
    int ans = INT64_MAX;
    int ctr = 0LL;
    for (int i = 1; i <= m; i++) {
        int provisional = total_if_none_removed - (int)((sellers[i] - sellers[i-1] - 1)/d)
                                                - (int)((sellers[i+1] - sellers[i] - 1)/d) 
                                                + (int)((sellers[i+1] - sellers[i-1] - 1)/d) - 1;
        
        if(provisional < ans) {
            ans = provisional;
            ctr = 0LL;
        }
        if(ans == provisional) {
            ctr = ctr + 1;
        }
        // cerr << provisional << " ";
    }
    // cerr << endl;
    cout << ans << " " << ctr << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}