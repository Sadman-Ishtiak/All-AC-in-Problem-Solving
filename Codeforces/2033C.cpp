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
    vector<int>a(n+2, 0), b(n+2, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        b[i] = a[n-i+1];
    }
    // for (int i = 1; i <= n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    vector<int>nl(n+2,0), sp(n+2,0);
    for (int i = 2; i <= (n+1)/2; i++) {
        nl[i] = min(nl[i-1] + (int)(a[i] == a[i-1]) + (int)(a[n-i+1] == a[n-i+2]),
                    sp[i-1] + (int)(a[i] == b[i-1]) + (int)(a[n-i+1] == b[n-i+2])
            );
        sp[i] = min(sp[i-1] + (int)(a[i] == a[i-1]) + (int)(a[n-i+1] == a[n-i+2]),
                    nl[i-1] + (int)(a[i] == b[i-1]) + (int)(a[n-i+1] == b[n-i+2])
            );
    }
    // cout << "nl : ";
    // for (int i = 1; i <= (n+1)/2; i++) {
    //     cout << nl[i] << " ";
    // }
    int ans = min(nl[(n+1)/2], sp[(n+1)/2]);
    if(n%2 == 0) ans += (a[n/2] == b[n/2]);
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}