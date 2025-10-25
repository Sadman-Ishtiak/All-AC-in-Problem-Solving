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
int MAX = 1000000 + 100;
vector<int> prefix(MAX + 100, 0);
void calc(int n = MAX) {
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + (i % 94 == 0 ? 1 : 0);
    }
}

void solve(){
    int l, r;
    cin >> l >> r;
    int ans = 0;
    // for (int i = l; i <= r; i++) {
    //     if(i % 94 == 0) ans++;
    // }

    // int x;
    // for (int i = 0; i < 94; i++) {
    //     if((l + i) % 94 == 0) {
    //         x = l + i;
    //         break;
    //     }
    // }
    // while (x <= r) {
    //     ans++;
    //     x += 94;
    // }
    
    // ans = (r / 94) - ((l - 1) / 94);

    // ans = (r / 94) - (l / 94);
    // if(l % 94 == 0) ans++;

    ans = prefix[r] - prefix[l - 1];

    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    calc();
    while(t--) solve();
    return 0;
}