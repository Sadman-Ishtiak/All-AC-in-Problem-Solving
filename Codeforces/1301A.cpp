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
    string a, b, c;
    cin >> a >> b >> c;
    bool ans = false;
    if(b == c || a == c) ans = true;
    else{
        ans = true;
        int n = a.size();
        for (int i = 0; i < n; i++) {
            if(!(b[i] == c[i] || a[i] == c[i])) ans = false;
        }
        
    }
    if(ans) YES;
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}