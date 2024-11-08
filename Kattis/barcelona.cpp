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
    int n, x;
    cin >> n >> x;
    vector<int>a(n);
    int z;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == x) z = i;
    }
    if(z == 0) cout << "fyrst" << endl;
    else if(z == 1) cout << "naestfyrst" << endl;
    else cout << z+1 << " fyrst" << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}