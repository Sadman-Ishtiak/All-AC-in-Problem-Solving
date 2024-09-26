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
    int n, s, m;
    cin >> n >> s >> m;
    vector<pair<int, int>>times(n);
    for (int i = 0; i < n; i++) {
        cin >> times[i].first >> times[i].second;
    }
    sort(times)
    bool ans = false;
    if(times[0].first >= s || (m-times[n-1].second) >= s) ans = true;
    for (int i = 0; i < n-1; i++) {
        if((times[i+1].first - times[i].second) >= s) ans = true;
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