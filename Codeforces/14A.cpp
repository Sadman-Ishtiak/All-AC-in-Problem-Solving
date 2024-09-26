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
    int m,n;
    cin >> n >> m;
    char s[n+1][m+1];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int top = 0, bottom = n-1, left = 0, right = m-1;
    for (int i = 0; i < n; i++) {
        bool ans = true;
        for (int j = 0; j < m; j++) {
            if(s[i][j] == '*') {
                ans = false;
                top = i;
                break;
            }
        }
        if(!ans) break;
    }
    for (int i = bottom; i >= 0; i--) {
        bool ans = false;
        for (int j = 0; j < m; j++) {
            if(s[i][j] == '*') {
                ans = true;
                bottom = i;
                break;
            }
        }
        if(ans) break;
    }
    for (int i = 0; i < m; i++) {
        bool ans = false;
        for (int j = 0; j < n; j++) {
            if(s[j][i] == '*') {
                ans = true;
                left = i;
                break;
            }
        }
        if(ans) break;
    }
    for (int i = m-1; i >= 0; i--) {
        bool ans = false;
        for (int j = 0; j < n; j++) {
            if(s[j][i] == '*') {
                ans = true;
                right = i;
                break;
            }
        }
        if(ans) break;
    }
    // output area
    for (int i = top; i <= bottom; i++){
        for (int j = left; j <= right; j++) {
            cout << s[i][j];
        }
        cout << endl;
    }
    
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}