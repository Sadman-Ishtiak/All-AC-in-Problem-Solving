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
    int n;
    cin >> n;
    switch (n) {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    case 5:
        cout << "five" << endl;
        break;
    case 6:
        cout << "six" << endl;
        break;
    case 7:
        cout << "seven" << endl;
        break;
    case 8:
        cout << "eight" << endl;
        break;
    case 9:
        cout << "nine" << endl;
        break;
    default:
        cout << "Greater than 9" << endl;
        break;
    }
}
int32_t main() {
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}