#include <bits/stdc++.h>
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
    int a,h;
    cin >> a >> h;
    int halfa = a/2;
    int ans;
    if(halfa*5 >= h){
        ans = h/halfa;
        ans += (h%halfa)?1:0;
        cout << ans << endl;
        return;
    }
    ans = 5;
    h -= halfa*5;
    ans += h/a;
    ans += (h%a)?1:0;
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}