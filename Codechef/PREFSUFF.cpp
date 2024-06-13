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
    vector<int>a(n, 7);
    a[0] = 7;
    a[n-1] = 3;
    if(n > 2) a[1] = 5;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    int xr = 0, an = a[0];
    // for (int i = 0; i < n; i++){
    //     xr ^= a[i];
    //     an &= a[i];
    //     cout << an << ">=" << xr << endl;
    // }
    // xr = 0, an = a[n-1];
    // for (int i = n-1; i >= 0; i--){
    //     xr ^= a[i];
    //     an &= a[i];
    //     cout << an << "<=" << xr << endl;
    // }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}