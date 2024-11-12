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
    int alice = 1, bob = 0;
    int togive = 2;
    n--;
    for (int i = 0; i < 10000; i++) {
        if(n > togive) {
            bob += togive;
            n -= togive;
            togive++;
        } else {
            bob += n;
            break;
        }
        if(n > togive) {
            bob += togive;
            n -= togive;
            togive++;
        } else {
            bob += n;
            break;
        }
        if(n > togive) {
            alice += togive;
            n -= togive;
            togive++;
        } else {
            alice += n;
            break;
        }
        if(n > togive) {
            alice += togive;
            n -= togive;
            togive++;
        } else {
            alice += n;
            break;
        }
    }
    cout << alice << " " << bob << endl;
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}