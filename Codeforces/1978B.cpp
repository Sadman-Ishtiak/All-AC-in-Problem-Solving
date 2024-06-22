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
    int n, a, b;
    cin >> n >> a >> b;
    int peak_k = min(n,b);
    int ans = 0;
    if (b>a){
        if (b-a >= n){
            int k = b-n;
            ans = b*(b+1)/2 - k*(k+1)/2;
        }
        else{
            ans = b*(b+1)/2 - a*(a+1)/2 + a*(n - (b - a));
        }
    }
    
    cout << max(ans, n*a) << endl;
    }
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}