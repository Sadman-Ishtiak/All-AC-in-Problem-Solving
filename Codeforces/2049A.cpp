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
    vector<int>a(n);
    int z = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 0) z++;
    }
    if(z == n) cout << 0 << endl;
    else if(z == 0) cout << 1 << endl;
    else {
        int fnz = 0, lnz = n-1;
        while (a[fnz] == 0) {
            fnz++;
            z--;
        }
        while (a[lnz] == 0) {
            lnz--;
            z--;
        }
        if(z == 0) cout << 1 << endl;
        else cout << 2 << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}