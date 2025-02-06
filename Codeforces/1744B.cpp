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
    int n, q;
    cin >> n >> q;
    vector<int>a(n);
    int evens = 0, odds = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]&1LL) odds++;
        else evens++;
        sum += a[i];
    }
    int type, x;
    for (int i = 0; i < q; i++) {
        cin >> type >> x;
        if(type == 0) {
            cout << sum + x * evens << endl;
            sum = sum + x * evens;
            if(x%2 == 1) {
                evens = 0;
                odds = n;
            }
        } else {
            cout << sum + x * odds << endl;
            sum = sum + x * odds;
            if(x%2 == 1) {
                evens = n;
                odds = 0;
            }
        }
    }
    
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}