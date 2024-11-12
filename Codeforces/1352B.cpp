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
    int n, k;
    cin >> n >> k;
    if((n - (k-1))%2 == 1 && (n - (k-1)) > 0){
        YES;
        for (int i = 0; i < k-1; i++) {
            cout << 1 << " ";
        }
        cout << n - (k - 1) << endl;
    } else if((n - 2*(k-1)) % 2 == 0 && (n - 2*(k-1)) > 0) {
        YES;
        for (int i = 0; i < k-1; i++) {
            cout << "2 ";
        }
        cout << n - 2*(k-1) << endl;
    } else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}