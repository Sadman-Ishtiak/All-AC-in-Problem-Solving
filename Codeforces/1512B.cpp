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
    int n;
    cin >> n;
    char s[n+1][n+1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }
    int x[5], y[5], k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(s[i][j] == '*'){
                x[k] = i;
                y[k] = j;
                k++;
            }
        }
    }
    // cout << x[1] << " " << y[1] << endl;
    // cout << x[2] << " " << y[2] << endl;
    if(x[1] == x[2] || y[1] == y[2]){
        if(x[1] == x[2]){
            if(x[1] == n-1){
                s[x[1]-1][y[1]] = '*';
                s[x[2]-1][y[2]] = '*';
            } else {
                s[x[1]+1][y[1]] = '*';
                s[x[2]+1][y[2]] = '*';
            }
        } else{
            if(y[1] == n-1){
                s[x[1]][y[1]-1] = '*';
                s[x[2]][y[2]-1] = '*';
            } else {
                s[x[1]][y[1]+1] = '*';
                s[x[2]][y[2]+1] = '*';
            }
        }
    } else {
        s[x[1]][y[2]] = '*';
        s[x[2]][y[1]] = '*';
    }
    // cout << "\n\n\n\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << s[i][j];
        }
        cout << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}