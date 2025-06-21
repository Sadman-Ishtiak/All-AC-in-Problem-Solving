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
    int l1, l2, l3, b1, b2, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    int area = l1*b1 + l2*b2 + l3*b3;
    int sq = sqrt(area);
    if(sq*sq == area) {
        if (l1 == sq && l2 == sq && l3 == sq && (b1 + b2 + b3 == sq)) YES;
        else if (b1 == sq && b2 == sq && b3 == sq && (l1 + l2 + l3 == sq)) YES;
        else if (l1 == sq && b2 == b3 && b1 + b2 == sq && l2 + l3 == sq) YES;
        else if (b1 == sq && l2 == l3 && l1 + l2 == sq && b2 + b3 == sq) YES;
        else NO;
    }
    else NO;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}