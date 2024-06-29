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
    int r, c;
    cin >> r >> c;
    string s[r][c];
    int a, b;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> s[i][j];
            if(s[i][j] == "snuke"){
                a = i;
                b = j;
            }
        }
    }
    cout << (char) ('A' + b) << a+1 << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}