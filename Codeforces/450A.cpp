#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
#define     YES             cout << "YES" << '\n'
#define     NO              cout << "NO" << '\n'
#define     Yes             cout << "Yes" << '\n'
#define     No              cout << "No" << '\n'
#define     ld              long double
#define     all(x)          x.begin(),x.end()
#define     sort(x)         sort(all(x));
#define     FastIO          ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     debug(x)        cout << #x << " = " << x << endl;
#define     fileIO          freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>>a(n);
    queue<pair<int, int>>q;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i+1;
        q.push(a[i]);
    }
    int ans;
    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        ans = p.second;
        p.first -= m;
        if(p.first > 0) q.push(p);
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}