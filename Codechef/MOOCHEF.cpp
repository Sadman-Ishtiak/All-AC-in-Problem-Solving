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
    int n, l, r;
    cin >> n >> l >> r;
    int x = 0, y = 0;
    int curr = 0;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        if(l <= t && t <= r)
            curr++;
        else 
            curr--;
        x = max(x, curr);
        y = min(y, curr);
    }
    cout << x << " " << y << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}