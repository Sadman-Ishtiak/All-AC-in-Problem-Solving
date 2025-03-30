#include<bits/stdc++.h>
#define     int             long long
#define     endl            '\n'
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

void test() {
    for (int i = 0; i <= 10000; i++) {
        if(i%3 == i%5) cerr << i << " ";
    }
}

void solve(){
    int n;
    cin >> n;
    int ans = (n/15);
    ans *= 3;
    n %= 15;
    ans += min(3LL, n+1LL);
    cout << ans << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    // test();
    while(t--) solve();
    return 0;
}