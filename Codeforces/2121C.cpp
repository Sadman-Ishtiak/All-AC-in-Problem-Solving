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
    int r, c;
    cin >> r >> c;
    vector<vector<int>>matrix(r, vector<int>(c, 0));
    int mx = INT_MIN;
    int ctr = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
            mx = max(mx, matrix[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            ctr += (matrix[i][j] == mx);
        }
    }
    
    // cerr << mx << " " << ctr << endl;
    if(ctr < 3) cout << mx - 1 << endl;
    else {
        vector<int>rowMaxCtr(r, 0), colMaxCtr(c,0);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if(matrix[i][j] == mx) {
                    matrix[i][j] = 1;
                    rowMaxCtr[i]++;
                    colMaxCtr[j]++;
                } else {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if(rowMaxCtr[i] + colMaxCtr[j] - matrix[i][j] == ctr) {
                    cout << mx - 1 << endl;
                    return;
                }
            }
        }
        cout << mx << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}