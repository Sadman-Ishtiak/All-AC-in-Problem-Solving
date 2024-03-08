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
    
}
int32_t main() {
    int t = 1;
    cin >> t;
    // while(t--) solve();
    vector<int>a(t);
    int ans = INT64_MAX;
    for (int i = 0; i < t; i++){
        cin >> a[i];
        ans = min(ans, abs(a[i]));
    }
    cout << ans;
	return 0;
}