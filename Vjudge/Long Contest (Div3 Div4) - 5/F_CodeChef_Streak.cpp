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
    vector<int>a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int aa = 0, bb = 0, aaa = 0, bbb = 0;
    for (int i = 0; i < n; i++) {
        if(a[i]) aa++;
        else aa = 0;
        if(b[i]) bb++;
        else bb = 0;
        aaa = max(aa, aaa);
        bbb = max(bb, bbb);
    }
    // cout << aaa << " " << bbb << endl;
    if(bbb > aaa) cout << "Addy\n";
    else if(aaa > bbb) cout << "Om\n";
    else cout << "Draw\n";
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}