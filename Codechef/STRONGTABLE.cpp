#include <bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "EVEN" << '\n'
#define     NO              cout << "ODD" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;
void solve(){
    int n, sum = 0;
    cin >> n;
    vector<int>a(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {cin >> a[i]; sum += a[i];}
    sort(a)
    for (int i = 0; i < n; i++){
        if(ans < a[i]*(n-i)) ans = a[i]*(n-i);
    }
    
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}