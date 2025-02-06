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
    int two = 0, three = 0, five = 0;
    while (n % 2 == 0) {
        n /= 2;
        two++;
    }
    while (n % 3 == 0) {
        n /= 3;
        three++;
    }
    while (n % 5 == 0) {
        n /= 5;
        five++;
    }
    if(n > 1) cout << -1 << endl;
    else cout << two + 2*three + 3*five << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}