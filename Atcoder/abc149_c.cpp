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
    vector<bool>flag(n+1000, true);
    int l = sqrt(n+1000)+100;
    for (int i = 2; i < l; i++) {
        if(flag[i]) {
            for (int j = i+i; j < n+1000; j+=i) {
                flag[j] = false;
            }
        }
    }
    int ans = 2;
    for (int i = n; i < n+1000; i++) {
        if (flag[i]) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}