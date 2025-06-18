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
    int n;
    cin >> n;
    vector<vector<int>>a(n+1);
    for (int i = 2; i <= n; i++) {
        int x; cin >> x;
        a[x].push_back(i);
    }
    for (int i = 1; i <= n; i++) {
        if(a[i].empty()) continue;

        int leafCounter = 0;
        for (auto &&j : a[i]) {
            if(a[j].empty()) leafCounter++;
        }
        if(leafCounter < 3) {No; return;}
    }
    Yes;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}