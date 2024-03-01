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
    int n,k, ans;
    cin >> n >> k;
    int L = 1e10, R = 0;
    while (L>R){
        ans = (L+R)/2;
        if(ans - ans/n > k){
            L = ans;
        } else if(ans - ans/n < k){
            R = ans;
        } else{
            break;
        }
    }
    while(ans - ans/n == k) ans--;
    cout << ++ans << endl;
    // cout << k + (k-1)/(n-1) << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}
