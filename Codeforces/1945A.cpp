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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = a + (b+c)/3;
    if((b+c) %3 != 0) ans++;
    if(b%3 + c < 3 && b%3 != 0){
        cout << -1 << endl;
        return;
    }
    cout << ans << endl; 
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}