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

void solve(){
    int buns, beef, chicken, hamburger_price, chickenburger_price;
    cin >> buns >> beef >> chicken >> hamburger_price >> chickenburger_price;
    if (hamburger_price > chickenburger_price) {
        int total = min(beef, buns/2) * hamburger_price;
        buns -= min(beef, buns/2)*2;
        total += min(buns/2, chicken) * chickenburger_price;
        cout << total << endl;
    } else {
        int total = min(buns/2, chicken) * chickenburger_price;
        buns -= min(chicken, buns/2)*2;
        total += min(beef, buns/2) * hamburger_price;
        cout << total << endl;
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}