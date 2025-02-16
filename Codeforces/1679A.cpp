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
    if(n < 4 || n % 2 == 1) cout << -1 << endl;
    else {
        int ans_1 = 0, ans_2 = 0;
        // Calculate minimum buses
        if(n%6==0) ans_1 = n/6;
        else {
            ans_1 = n / 6 + 1;
        }
        // Calculate maximum buses
        if(n%4==0) ans_2 = n/4;
        else {
            ans_2 = n / 4;
        }
        cout << ans_1 << " " << ans_2 << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}