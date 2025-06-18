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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a)
    cout << a[n-k].first << endl;
    vector<int>ans;
    for (int i = n-k; i < n; i++) {
        ans.push_back(a[i].second);
    }
    sort(ans)
    for (auto &&i : ans) {
        cout << i << " ";
    }
    cout << endl;
}
int32_t main() {
    fileIO
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}