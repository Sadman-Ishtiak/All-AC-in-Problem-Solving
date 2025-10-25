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
    int n, k;
    cin >> n >> k;
    if(k == n*n-1) NO;
    else {
        YES;
        int counter = 0;
        char ans[n][n+1];
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if(counter < k) ans[i][j] = 'U';
                else ans[i][j] = 'D';
                counter++;
            }
            // cout << endl;
        }
        for (int i = 0; i < n; i++) {
            ans[i][n] = '\0';
        }
        for (int i = 0; i < n; i++) {
            if(ans[n-1][i] == 'D')
                ans[n-1][i] = 'R';
        }
        ans[n-1][n-1] = 'L';
        for (int i = 0; i < n; i++) {
            cout << ans[i] << endl;
        }
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}