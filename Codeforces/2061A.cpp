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
    vector<int>a(n), evens, odds;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]&1LL) odds.push_back(a[i]);
        else evens.push_back(a[i]);
    }
    int ans = 0;
    if(evens.size() > 0 && odds.size()) ans = odds.size() + 1;
    else if(evens.size() == 0) ans = odds.size() - 1;
    else if(odds.size() == 0) ans = 1;
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}