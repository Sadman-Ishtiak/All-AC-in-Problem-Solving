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
    int n, m;
    cin >> n >> m;
    if(n == 1 || m == 1){
        cout << "1 1\n";
        return;
    }
    if(n == 2) {
        if(m > 3) cout << "1 1\n";
        else cout << "2 2\n";
        return;
    }
    if(m == 2) {
        if(n > 3) cout << "1 1\n";
        else cout << "2 2\n";
        return;
    }
    if(n == 3 || m == 3) {
        cout << "2 2\n";
        return;
    }
    cout << "1 1\n";
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}