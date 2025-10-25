#include<bits/stdc++.h>
#define     int             long long
// #define     endl            '\n'
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
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j+i <= n; j++) {
            cout << j << " " << j+i << "\n" << flush;
            int x;
            cin >> x;
            if(x == -1) exit(0);
            if(x == 1) {
                // cout << endl;
                return;
            }
        }
    }
    
}
int32_t main() {
    FastIO;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}