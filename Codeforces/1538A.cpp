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
    int n;
    cin >> n;
    vector<int>a(n);
    int big = 1, smol = 1, ans = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < a[smol-1]) smol = i + 1;
        if(a[i] > a[big -1]) big  = i + 1;
    }
    int leftside = min(big, smol), rightside = max(big, smol);
    ans = min({max(big, smol), max(n-big+1, n-smol+1), leftside + n-rightside + 1});
    // cout << big << " " << smol << endl;
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
	return 0;
}