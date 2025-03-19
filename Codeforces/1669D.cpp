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
bool logical_xor(bool a, bool b) {
    return (a && !b) || (!a && b);
}


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'W') {
            if(logical_xor(r==0, b==0)) {
                NO;
                return;
            }
            r = 0;
            b = 0;
        } else {
            if(s[i] == 'R') r++;
            if(s[i] == 'B') b++;
        }
    }
    if(logical_xor(r==0, b==0)) {
        NO;
        return;
    }
    YES;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}