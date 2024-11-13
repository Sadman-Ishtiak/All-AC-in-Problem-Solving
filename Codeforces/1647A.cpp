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
    string s;
    if(n == 1) cout << 1 << endl;
    else if(n == 2) cout << 2 << endl;
    else {
        if(n%3 == 0) {
            while (n) {
                n -= 3;
                s += "21";
            }
            cout << s << endl;
        }
        else if(n%3 == 1) {
            s = "1";
            n--;
            while (n > 0) {
                n-= 3;
                s += "21";
            }
            cout << s << endl;
        } else {
            s = "2";
            n -= 2;
            while (n > 0) {
                n-= 3;
                s += "12";
            }
            cout << s << endl;
        }
    }
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}