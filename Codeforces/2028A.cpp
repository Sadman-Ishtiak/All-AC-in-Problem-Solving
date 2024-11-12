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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < n; j++) {
            if(s[j] == 'N') y++;
            if(s[j] == 'S') y--;
            if(s[j] == 'E') x++;
            if(s[j] == 'W') x--;
            if(x == a && y == b) {
                YES;
                return;
            }
        }
    }
    NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}