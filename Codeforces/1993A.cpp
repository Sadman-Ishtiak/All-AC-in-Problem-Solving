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
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < s.size(); i++) {
        if(s[i] == 'A') a++;
        if(s[i] == 'B') b++;
        if(s[i] == 'C') c++;
        if(s[i] == 'D') d++;
    }
    cout << min(a, n) + min(b,n) + min(c,n) + min(d,n) << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}