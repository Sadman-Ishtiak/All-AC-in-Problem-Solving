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
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    string s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    if(s[r-1][c-1] == 'B') {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; i++){
        if(s[i][c-1] == 'B'){
            cout << 1 << endl;
            return;
        }
    }
    for (int i = 0; i < m; i++) {
        if(s[r-1][i] == 'B'){
            cout << 1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(s[i][j] == 'B'){
                cout << 2 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}